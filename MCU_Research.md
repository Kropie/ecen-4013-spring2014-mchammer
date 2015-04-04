# MCU Research #
#### Chase Meadors ####


---


### Microcontroller Hardware ###

**Microcontroller Type**

The Software and MCU for the project will be a PIC microcontroller. Because of the wealth of preexisting resources for PICs from other students, the Senior Design lab, and online resources, going with PIC will significantly ease development and prototyping

**Option: PIC32MX family**

I first considered the PIC32MX family of microcontrollers, considering that I got my microcontroller certification on a PIC32MX250F128B. However, this option quickly went by the wayside, as the chip simply contains far too many features that were unneeded by the project, such as excessive memory, USB-to-go, 9 A/D channels, etc.

**Option: PIC24FJ32GA102**

I felt that the PIC24 family generally suits our needs in regards to the relatively minimal amount of computation we will be doing on the PIC. It is a mid-range microcontroller that draws a balance between excessive features and excessive constraints (that would negatively impact development time and integration, and possibly introduce unforeseen issues). In addition, the PIC24F family has low power features that can aid in the Hammer’s standby/sleep state. The specific model number was found by doing a parametric search, and selecting the most inexpensive chip that met our feature needs. The chip features UART, I2C, and SPI, an A/D converter, and an adequate amount of program memory and RAM. I chose to go with the 28-pin DIP package specifically to aid in prototyping.

**Final Choice: PIC24HJ64GP502**

Unfortunately, the one feature missing from the PIC24F family is the presence of a CAN controller module. I made the judgment that the small increase in cost was warranted by the ease in development of CAN applications. This chip features the same important factors outlined previously in the PIC24F. Unfortunately, since no PICs with CAN are made in the PIC24F family, the low power features will be sacrificed. I do not estimate this to be a significant factor in the power usage of the hammer.

(picture)

This figure shows the device summary of the PIC24HJ64GP502 from Microchip’s website. More detailed information can be found in the specific device datasheet.


---


### PIC Setup ###

(picture)

Microchip specifies the minimal connections to safely and properly work with the PIC. I’ve implemented these connections on a breadboard that also exposes a programming cable connection and a serial UART connection for debugging during prototyping.


---


### Sources ###
“PIC24FJ32GA102”, Webpage, Retrieved from http://www.microchip.com/wwwproducts/Devices.aspx?product=PIC24FJ32GA102, Microchip, 10/1/14

“PIC32MX250F128B”, Webpage, Retrieved from http://www.microchip.com/wwwproducts/Devices.aspx?dDocName=en557425, Microchip, 10/1/14

“PIC24FJ64GA104 Family Data Sheet”, Datasheet, Retrieved from http://ww1.microchip.com/downloads/en/DeviceDoc/39951C.pdf, Microchip, 10/1/14

“PIC32MX1XX/2XX Family Data Sheet”, Datasheet, Retrieved from http://ww1.microchip.com/downloads/en/DeviceDoc/60001168F.pdf, Microchip, 10/1/14