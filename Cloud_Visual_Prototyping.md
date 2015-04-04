# Cloud Visual Prototyping #
#### Jesse Venzor ####


---


For the Cloud visual, I planned on using the TCA6507 LED driver to operate several LEDs. I worked on I2C code for communication between the driver and the PIC. When it came time to actually testing, I ran into a problem. The pins on the LED Driver were too small to actually surface mount. Due to this problem, I had to resort to driving an LED over a GPIO pin from the PIC. I used code to make the LED blink on and off during the presentation. Whenever the RF transceiver would receive a packet, the LED would turn off and on for multiple seconds.

![https://wiki.ecen-4013-spring2014-mchammer.googlecode.com/git-history/master/cloud%20visual%20breadboard.jpg](https://wiki.ecen-4013-spring2014-mchammer.googlecode.com/git-history/master/cloud%20visual%20breadboard.jpg)

###  ###