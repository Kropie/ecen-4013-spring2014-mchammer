# IR Research #
#### Muhammad Umair ####


---


### IR Emitter ###

So far, I am planning to use only one IR emitter for the cloud in the center so I can be able to transmit MIRP packets in 360° with 45° vertical spread and within 10’ radius.


|Component|Forward current(mA)|Forward Voltage|Radiant intensity|Half Angle|Cost/Unit|Diameter|Peak wavelength|
|:--------|:------------------|:--------------|:----------------|:---------|:--------|:-------|:--------------|
|OED-EL-1L2|100|1.2|60 mW/sr|30|$0.49|5mm|940 nm|
|SFH 4547|100|1.5|25 mW/sr|30|$0.41|5mm|940 nm|
|TSAL7600|100|1.35 - 1.6|25mW/sr|30|5mm|940 nm|
|TSAL 6100|100|1.35-1.6|170 mW/sr|10|$0.57|5mm|940 nm|


The reason I did not select TSAL 7600 is I could only find its datasheet but it is out of stock everywhere. However, it could be a good alternative to use.


TSAL 6100 has high radiant intensity but very low half angle and almost 40% more expensive as compare to SFH 4547.



---


### IR Receiver ###
For the hammer, we are planning to use 8 IR receivers, one on each corner of the hammer for MIRP receiving and designing purposes.

1. TSOP32256 (Primary)
  * Cost: $0.76
  * Leaded mount
  * Supply voltage = 2.5-5.5V
  * Improved immunity against ambient light
  * Carrier freq. range: 56kHz
  * Power consumption = 10mW
  * Viewing angle = 45deg
  * Wavelength sensitivity – Peak @ 950nm

2. TSOP34856 (Alternative)
  * Cost: $1.33
  * Leaded mount
  * Supply voltage = 2.5-5.5V
  * Improved immunity against ambient light
  * Carrier freq. range 30 –56kHz
  * Power consumption = 10mW
  * Viewing angle = 45deg
  * Wavelength sensitivity – Peak @ 950nm

3. TSOP6256 (Alternative)

(picture)

Option 2 was dropped mainly because of the higher price than the primary choice.

Option 3 is not selected since it is surface mounted. The idea is to put the receiver on the corners of the hammer so through hole component would be easier to deal with.


---


### Transistor (2N2222A) ###

(Picture)


---


### Hammer IR Flowchart ###
(picture)


---


### Data Sources ###
|Type of datasource|Title, URL, etc.|Using in Protoype?|
|:-----------------|:---------------|:-----------------|
|Datasheet|http://www.osram-os.com/Graphics/XPic4/00101985_0.pdf|Yes|
|Datasheet|http://www.vishay.com/docs/82489/tsop322.pdf|Yes|
|Datasheet|http://html.alldatasheet.com/html-pdf/252292/VISHAY/TSOP6256/217/1/TSOP6256.html|No|
|Datasheet|http://www.vishay.com/docs/82489/tsop322.pdf|No|
|Datasheet|http://www.mouser.com/catalog/specsheets/tsal7600.pdf|No|
|Reference|https://stillwater.sharepoint.okstate.edu/ecendesign/Training%20Documents/PIC/PIC%20Reference/ccpwm.pdf|Yes|
|Specification|http://mage.okstate.edu/doc/ir/MIRP.pdf|No|
|General info|http://www.futureelectronics.com/en/optoelectronics/infrared-receivers.aspx|No|
|Hardware info|http://www.futureelectronics.com/en/optoelectronics/infrared-receivers.aspx|No|