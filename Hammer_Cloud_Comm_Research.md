# Cloud Communication Research #
#### Jesse Venzor ####


---

## Wireless Protocol/Hardware ##

### ZigBee ###

When ZigBee node is powered down, it can wake up and get a packet in around 15 msec whereas a Bluetooth device would take around 3sec to wake up and respond.

Frequency agile solution operating over 16 channels in the 2.4GHz frequency
Security key generation mechanism

Bluetooth’s protocol is more complex since it is geared towards handling voice, images and file transfers in ad hoc networks.

Ability to automatically compensate for RF interference

Avoids interference and ensures network has best channel to operate


ZigBee products have access to 16 separate, 5MHz channels in the 2.4GHz band. Several of these do not overlap with US and European versions of Wi-Fi™. ZigBee incorporates an IEEE 802.15.4 defined CSMA-CA protocol that reduces the probability of interfering with other users, plus ZigBee uses automatic retransmission of data to ensure network robustness. Because the duty cycle of a ZigBee product is usually extremely low, relatively few packet data units are transmitted, reducing the likelihood of an unsuccessful transmission

ZigBee node can wake up and communicate with other ZigBee devices and return to sleep. Representative times as follows:
  * 30 ms (typical) = new slave enumeration
  * 15 ms (typical) = sleep slave to active
15 ms (typical) = active slave channel access

ZigBee's standardized pairing process allows for fast and easy association between devices. ZigBee offers a variety of robust mesh routing algorithms for data packets to find the correct destination. This approach results in a high degree of flexibility and stability ensuring that devices in the network stay connected and that network performance remains constant even as it is dynamically changing.

**MRF24J40MA**
  * Hardware CSMA-CA Mechanism – is a network multiple access method in which carrier sensing is used, but nodes attempt to avoid collisions by transmitting only when the channel is sensed to be "idle".When they do transmit, nodes transmit their packet data in its entirety.
    1. Carrier Sense:
    1. Collision Avoidance: if another node was heard, we wait for a period of time for the node to stop transmitting before listening again for a free communications channel.
  * Automatic packet retransmit capable
  * ACK - In data networking, an acknowledgement (or acknowledgment) is a signal passed between communicating processes or computers to signify acknowledgement, or receipt of response, as part of a communications protocol. For instance, ACK packets are used in the Transmission Control Protocol (TCP) to acknowledge the receipt of SYN packets when establishing a connection, data packets while a connection is being used, and FIN packets when terminating a connection.
  * Hardware security engine (AES-128) – advanced encryption standard for security
  * Surface Mountable

(pictures)


### Bluetooth ###
Bluetooth technology exchanges data over short distances using radio transmissions. Bluetooth technology operates in the unlicensed industrial, scientific and medical (ISM) band at 2.4 to 2.485 GHz, using a spread spectrum, frequency hopping, full-duplex signal at a nominal rate of 1600 hops/sec. The 2.4 GHz ISM band is available and unlicensed in most countries

The headline feature of 2.1 is secure simple pairing (SSP): this improves the pairing experience for Bluetooth devices, while increasing the use and strength of security.

2.1 allows various other improvements, including "Extended inquiry response" (EIR), which provides more information during the inquiry procedure to allow better filtering of devices before connection; and sniff subrating, which reduces the power consumption in low-power mode.

**Interference**

Bluetooth technology's adaptive frequency hopping (AFH) capability was designed to reduce interference between wireless technologies sharing the 2.4 GHz spectrum. AFH works within the spectrum to take advantage of the available frequency. This is done by the technology detecting other devices in the spectrum and avoiding the frequencies they are using. This adaptive hopping among 79 frequencies at 1 MHz intervals gives a high degree of interference immunity and also allows for more efficient transmission within the spectrum. For users of Bluetooth technology this hopping provides greater performance even when other technologies are being used along with Bluetooth technology.

**Security**

  * Encryption is required for all non-SDP (Service Discovery Protocol) connections
  * A new Encryption Pause and Resume feature is used for all normal operations requiring encryption to be disabled. This enables easy identification of normal operation from security attacks.
  * The encryption key is required to be refreshed before it expires.

The **Bluetooth Special Interest Group (SIG)** is the body that oversees the development of Bluetooth standards and the licensing of the Bluetooth technologies and trademarks to manufacturers.

**RN-42**
  * Secure communications, 128 bit encryption
  * Error correction for guaranteed packet delivery
  * Auto-discovery/pairing requires no software configuration (instant cable replacement)
  * Bluetooth SIG qualified
  * Programmable low power modes

(pictures)


---


## Sources ##