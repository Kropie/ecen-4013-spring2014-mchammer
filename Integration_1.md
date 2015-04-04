# Integration 1 #

### Integration Main Loop ###
#### Hammer ####
```
void hammerMain() {

    uprint("\r\n ######################## BOOT UP (HAMMER) ######################## \r\n");

    initHammerState();

    configureADC();
    configureTimer1();

    configureAudio();
    int sta = configureRadio(0x0A00, 0x0000111111111111);
    uprint_int("Configured radio: ", sta);

    configureIRReceive();

    configureLightMCU_SPI();

//    while (1) {
//        startTrackingSpin();
//        while (!checkSpinComplete());
//        uprint("You did it!");
//        DELAY_MS(5000);
//    }

    int sound;
    while (1) {
        uprint("Play sound...");
        sound = uart1Rx();
        uprint_int("Playing sound ", sound - 48);
        playSound(sound - 48);
    }

    unsigned char i = 0;
    char rxnum[50];
    unsigned char num;
    while (1) {
        uprint("Enter health to send");
        uart1_gets(rxnum, 50);
        num = (unsigned char)atoi(rxnum);
        uprint_int("Sending ", num);
        sendLightMCU(num);
    }

    while (1) {
        uprint_dec("Health: ", getHammerStatePtr()->health);
    }
}
```

#### Cloud ####
```
void cloudMain() {

    uprint("\r\n ************************ BOOT UP (CLOUD) ************************ \r\n");

    configureIRSend();

    while (1) {
        DELAY_MS(1500);
        uprint("Sending damage packet...");
        sendDamagePacket();
    }
}
```


---


### Layout ###
This layout includes each block of the hammer and cloud on one board.
https://wiki.ecen-4013-spring2014-mchammer.googlecode.com/git-history/master/bare%20bones%20layout.PNG


---


### Empty Board ###
![https://wiki.ecen-4013-spring2014-mchammer.googlecode.com/git-history/master/integration%201%20no%20wires.jpg](https://wiki.ecen-4013-spring2014-mchammer.googlecode.com/git-history/master/integration%201%20no%20wires.jpg)

### Work in Progress ###
![https://wiki.ecen-4013-spring2014-mchammer.googlecode.com/git-history/master/barebones%20in%20progress.jpg](https://wiki.ecen-4013-spring2014-mchammer.googlecode.com/git-history/master/barebones%20in%20progress.jpg)

### Completed Board w/ Packaging ###
![https://wiki.ecen-4013-spring2014-mchammer.googlecode.com/git-history/master/integration%201%20w%20packaging.jpg](https://wiki.ecen-4013-spring2014-mchammer.googlecode.com/git-history/master/integration%201%20w%20packaging.jpg)

### Board Details ###
Labels coming soon....
![https://wiki.ecen-4013-spring2014-mchammer.googlecode.com/git-history/master/integration%201.jpg](https://wiki.ecen-4013-spring2014-mchammer.googlecode.com/git-history/master/integration%201.jpg)