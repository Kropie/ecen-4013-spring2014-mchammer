# CAN Research #
#### Parker Rice ####


---


### CAN Transceiver ###
The CAN transceiver allows the microcontroller in our hammer to easily connect with the HIU and communicate with the MAGE server.

**Option 1: Microchip Technology MCP2551**
  * Recommended chip
  * Ample documentation from previous projects
  * Supports 1 Mb/s operation
  * Low current standby operation

**Option 2: Texas Instruments SN65HVDA540QDR**

This CAN transceiver has most of the same functions as the first option, but is almost twice as costly.

**Summary:**

We will be using the MCP2551 chip for our project because it has the required functions needed to send and receive information between our microcontroller and the HIU.  The other option completes the same functions for a similar cost, but the MCP2551 is also the recommended chip used natively in the HIU and has been widely implemented in previous MAGE projects.
| |MCP2551|SN65HVDA540QDR|
|:|:------|:-------------|
|Cost|$1.12|$2.01|
|Operational Voltage|5V|5V|
|Supply Current|75mA (max)|75mA (max)|


---


### Data Sources ###
|Type of data source|Title, URL, etc.|Using in Prototype?|
|:------------------|:---------------|:------------------|
|Datasheet|http://www.mouser.com/ds/2/268/21667d-63675.pdf|Yes|
|Datasheet|http://www.ti.com/lit/ds/symlink/sn65hvda540.pdf|No|
|Online Article|http://www.esacademy.com/en/library/technical-articles-and-documents/can-and-canopen/selecting-a-can-controller.html|No|
|Online Article|http://www.ti.com/lit/an/sloa101a/sloa101a.pdf|Yes|