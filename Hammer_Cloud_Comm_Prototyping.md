# Hammer/Cloud Communication Prototyping #
#### Jesse Venzor ####


---


During the prototyping stage, I was in charge of Hammer/Cloud wireless communication and cloud visual. First, I started prototyping by placing everything on a breadboard. In order for this to work, I had to attach header pins to my RF transceivers. The communication logic took the longest out of all of my blocks. With the help of Chase Meadors, we were able to get the transceivers to communicate with one another. We had to set up the SPI connection, which communicates information from the pic to the transceiver. In Order to ensure they were communicating, we set up a UART connection that would display messages on our computers. While we were prototyping on the breadboard, we were experiencing some problems. Whenever someone put their hand close to the connections, the transceiver would reboot automatically. Through some debugging we figured out that our frequency for the SPI connection was way too high.  After I got the transceivers to work properly, I wanted to test them on copper boards. I milled two boards for this part of the prototype. Unfortunately, when it came time to present my prototype with the copper boards, it did not work. I eventually put everything back on the breadboard, and got it to work again. The RF circuit operated at 3.3 V, and was outputting about 67mA.

### Schematic ###
https://wiki.ecen-4013-spring2014-mchammer.googlecode.com/git-history/master/comm%20schematic.PNG

### Layout ###
https://wiki.ecen-4013-spring2014-mchammer.googlecode.com/git-history/master/comm%20layout.PNG