#include <stdio.h>
#include <stdlib.h>

#include <xc.h>
#include "hardware.h"

#include "cm_uart.h"

#include "Common.h"

unsigned char gsData[192] = {
// MSB LSB
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, // Channel 15
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, // Channel 14
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, // Channel 13
1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, // Channel 12
0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, // Channel 11
0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, // Channel 10
0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, // Channel 9
0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, // Channel 8
0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, // Channel 7
0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, // Channel 6
0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, // Channel 5
0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, // Channel 4
0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, // Channel 3
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, // Channel 2
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, // Channel 1
1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, // Channel 0
};

unsigned int gscount = 0;

void cloudLightingUpdate() {

    IEC0bits.T2IE = 0;
    pCLIGHTS_BLANK_PORT = 1;

    char firstCycleFlag = 0;

    if (pCLIGHTS_VPRG_PORT) {
        pCLIGHTS_VPRG_PORT = 0;
        firstCycleFlag = 1;
    }

    unsigned int gsclk_count = 0;
    unsigned char data_count = 0;

    while (1) {
        if (gsclk_count > 4095) {
            pCLIGHTS_XLAT_PORT = 1;
            pCLIGHTS_XLAT_PORT = 0;
            if (firstCycleFlag) {
                pCLIGHTS_SCK_PORT = 1;
                pCLIGHTS_SCK_PORT = 0;
                firstCycleFlag = 0;
            }
            break;
        } else {
            if (!(data_count > (192 - 1))) {
                pCLIGHTS_SDO_PORT = gsData[data_count];
                pCLIGHTS_SCK_PORT = 1;
                pCLIGHTS_SCK_PORT = 0;
                data_count ++;
            }
        }
//        pCLIGHTS_GSCLK_PORT = 1;
//        pCLIGHTS_GSCLK_PORT = 0;
        gsclk_count ++;
    }

    pCLIGHTS_BLANK_PORT = 0;
    TMR2 = 0;
    gscount = 0;
    IEC0bits.T2IE = 1;
}

void __attribute__ ((__interrupt__,no_auto_psv)) _T2Interrupt(void) {
    IFS0bits.T2IF = 0;
    pCLIGHTS_BLANK_PORT = 1;
    pCLIGHTS_BLANK_PORT = 0;
}

//void cloudLightingUpdate() {
//    char firstCycleFlag = 0;
//
//    if (pCLIGHTS_VPRG_PORT) {
//        pCLIGHTS_VPRG_PORT = 0;
//        firstCycleFlag = 1;
//    }
//
//    unsigned int gsclk_count = 0;
//    unsigned char data_count = 0;
//
//    while (1) {
//        pCLIGHTS_BLANK_PORT = 0;
//        if (gsclk_count > 4095) {
//            pCLIGHTS_BLANK_PORT = 1;
//            pCLIGHTS_XLAT_PORT = 1;
//            pCLIGHTS_XLAT_PORT = 0;
//            if (firstCycleFlag) {
//                pCLIGHTS_SCK_PORT = 1;
//                pCLIGHTS_SCK_PORT = 0;
//                firstCycleFlag = 0;
//            }
//            break;
//        } else {
//            if (!(data_count > (192 - 1))) {
//                pCLIGHTS_SDO_PORT = gsData[data_count];
//                pCLIGHTS_SCK_PORT = 1;
//                pCLIGHTS_SCK_PORT = 0;
//                data_count ++;
//            }
//        }
//        pCLIGHTS_GSCLK_PORT = 1;
//        pCLIGHTS_GSCLK_PORT = 0;
//        gsclk_count ++;
//    }
//}