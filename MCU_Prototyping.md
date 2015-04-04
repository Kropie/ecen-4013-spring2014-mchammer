# MCU Prototyping #
#### Chase Meadors ####


---


### MCU Functional Interface ###

  * Motion: Specified in cm\_accelerometer.h
```
int checkSpinComplete();
/*
    Input: None
    Output: 1 if a motion history indicates that 3 spins have occurred, 
            0 if otherwise
    Effects: None
*/

int checkThrustComplete();
/*
    Input: None
    Output: 1 if motion history indicates that an upward thrust has occurred,
            0 if otherwise
    Effects: None
*/

void resetMotionHistory();
/*
    Input: None
    Output: None
    Effects: Clears motion algorithm history (resets state)
*/
```

  * Light co-processor control: Specified in cm\_lightmcu.h
```
void configureLightMCU_SPI();
/*
    Input: None
    Output: None
    Effect: Configures SPI1 with the correct settings to communicate with
            the light coprocessor. Configures PPS to match with physical
            pin connections
*/

void sendLightStateUpdate(double health, double charge);
/*
    Input: double health, double charge
    Output: None
    Effect: Communicates to the light co-processor to change/update the 
            state of the lights
*/
```

  * Wireless radio control: Specified in cm\_radio.h
```
int configureRadio(int short_addr, long long long_addr);
/*
    Input:  short_addr: The 16-bit short address to give the radio
            long_addr: The 64-bit long address to give the radio
    Output: 1 if radio was configured successfully, 0 if otherwise
    Effect: Configures PPS and initializes MRF24J40 driver library for
            communication
*/

void radioSendMessage(char *message, int dest_short_addr);
/*
    Input:  message: Null-terminated string to send
            dest_short_addr: The short address of the recipient
    Output: None
    Effect: Communicates to the radio to send a wireless packet with 
            'message' in the payload. Blocks until the radio reports
            that it is no longer transmitting.
*/


void radioGetMessage(char *buf, int length);
/*
    Input:  buf: Buffer to write into
            length: Maximum length to write into buf
    Output: None
    Effect: Blocks until the radio reports a received message, and copies
            its payload into buf
*/
```

  * Sound effects: Specified in cm\_soundeffects.h
```
int playSound(SoundEffect s);
/*
    Input:  s: An enumerated integer identifying the sound
    Output: 0 if the sound was started, 1 if a sound is already playing
    Effect: Communicates to the sound controller to play a select sound
*/
```


### MCU Main Loop ###
```
int main(int argc, char** argv) {

    AD1PCFGL = 0xFFFF;

    // Set up peripherals, devices, and state
    
    configureUART1();

    initHammerState();
    HammerState *gHammerState = getHammerStatePtr();

    configureTimer1();
    configureRadio(0x0A00, 0x0000111111111111);
    configureLightMCU_SPI();

    char doneString[50] = "DONE";
    char rxbuf[50] = "DONE";

    while (1) {

        while (!checkSpinComplete());
        resetMotionHistory();

        playSound(SOUND_SPIN_COMPLETE);

        gHammerState->chargeRate = 100 * exp(-0.023 * gHammerState->health);
        gHammerState->charging = 1;

        while (gHammerState->chargeStatus < 100) {
            playSound(SOUND_CHARGING);
            sendLightStateUpdate(gHammerState->health, gHammerState->chargeStatus);
        }

        playSound(SOUND_CHARGING_COMPLETE);
        gHammerState->charging = 0;
        gHammerState->chargeStatus = 0;

        while (!checkThrustComplete());
        resetMotionHistory();

        radioSendMessage("FIRE", 0x0A00);
        gHammerState->invincible = 1;
        radioGetMessage(rxbuf, 50);

        if (memcmp(rxbuf, doneString, 4) != 0) {
            uprint("Error, invalid packet from cloud!");
            return 1;
        }

        gHammerState->invincible = 0;

    }
    return (EXIT_SUCCESS);
}
```