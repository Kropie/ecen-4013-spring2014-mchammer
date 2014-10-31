#include <stdlib.h>

#include <xc.h>
#include "Common.h"
#include "hardware.h"

#include "cm_uart.h"
#include "cm_soundeffects.h"

void playSound(int sound) {

    int i;
    AUDIO_CLK_PORT = 1;
    AUDIO_CLK_PORT = 0;
    DELAY_MS(2); // Wait 2ms before starting to send data

    for (i = 0; i < 16; i++) { // Loop to cycle through and send each bit
        AUDIO_CLK_PORT = 0;
        AUDIO_DATA_PORT = (sound >> (15 - i)) & 0x01; // Shift the andBit j times left and & it with the num input
        DELAY_US(200);
        AUDIO_CLK_PORT = 1;
        DELAY_US(200);
    }
    AUDIO_DATA_PORT = 1;

}
