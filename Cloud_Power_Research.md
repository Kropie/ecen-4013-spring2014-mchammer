# Cloud Power Research #
#### Cris Slaughter ####


---


### Cloud 3.3V Voltage Regulator Options ###
|Name|Price ($)|Mounting Style|Output Current(mA)|
|:---|:--------|:-------------|:-----------------|
|TPS79133DBVR|1.29|SMD|100|
|LF33ABV|1.03	TH|500|
|LD1086V33|1.40|TH|1500|

**First option - LD1086V33**

This is chosen as the first option since it has a low price point and the highest output current. Additionally, as it’s an LDO regulator, it will require less added components to implement.

**Second option - LF33ABV**

This is the second option due to the fact it has a low price, decent output current, and an LDO regulator as is the first option.

**Third option - TPS79133DBVR**

This was chosen as a third option in case there are overtly restrictive space requirements that arise. IT does provide lower output current than all the other options however.


---


### Cloud 5V Voltage Regulator Options ###
|Name|Price ($)|Mounting Style|Output Current(mA)|
|:---|:--------|:-------------|:-----------------|
|MCP1804T-5002I/OT|0.72|SMD|150|
|LD1117V50C|0.96|TH|950|
|L4941BV|1.16|TH|1000|

**First option - L4941BV**

This was chosen as the first option since it has a large output current and an acceptable price. As with the 3.3V regulators it is also LDO.

**Second option - LD1117V50C**

The characteristics of this voltage regulator are quite similar to the first option except for a lower output current and price. Thus, this is a good second option should problems arise with the first.

**Third option - MCP1804T-5002I/OT**

This was chosen as a third option in case there are overtly restrictive space requirements that arise. IT does provide lower output current than all the other options however.


---


### Cloud Battery Options ###
|Name|Price ($)|Voltage (V)|Capacity (mAh)|
|:---|:--------|:----------|:-------------|
|Tenergy 30201|11.07|9 |900|
|Tenergy 30006|19.95|7.4|2600|
|Renata 1000-0|19.62|9 |950|

**First option - Tenergy 30201**

This was chosen as the first option since the batteries are very small and the required charger is cheap. With 900mAh it should be able to provide more than enough power to the cloud.

**Second Option - Tenergy 30006**

This is the second option since it has a lower voltage, it’s not as small as the 30201, and because it will cost a lot more to purchase the required charger. The plus of this battery is that it has a larger capacity than the 30201.

**Third Option - Renata 1000-0**

This was chosen as the final option for the size requirements. The only downside to these are is that they can not be recharged.


---


### Data Sources ###

#### 5V Regulator ####
  1. http://www.mouser.com/ProductDetail/Microchip-Technology/MCP1804T-5002I-OT/?qs=sGAEpiMZZMsGz1a6aV8DcBXuzF6GT3FA2Z3MHvBMCnc%3d  - Site for MCP1804T-5002I/OT Regulator
  1. http://www.mouser.com/ProductDetail/STMicroelectronics/LD1117V50C/?qs=sGAEpiMZZMsGz1a6aV8DcCwRipvt0X3PXDVXWaOVWAU%3d – Site for LD1117V50C regulator
  1. http://www.mouser.com/ProductDetail/STMicroelectronics/L4941BV/?qs=sGAEpiMZZMsGz1a6aV8DcCz10aAT%252bcfyanJDTu3s0jg%3d – Site for L4941BV regulator

#### 3.3V Regulator ####
  1. http://www.mouser.com/ProductDetail/Texas-Instruments/TPS79133DBVR/?qs=sGAEpiMZZMsGz1a6aV8DcInFTg8SYcTmVMEn8yI3Hgs%3d – Site for TPS79133DBVR regulator
  1. http://www.mouser.com/ProductDetail/STMicroelectronics/LF33ABV/?qs=sGAEpiMZZMsGz1a6aV8DcBQiArhhid1gDswAeAw%2fIB0%3d – Site for LF33ABV regulator
  1. http://www.mouser.com/ProductDetail/STMicroelectronics/LD1086V33/?qs=sGAEpiMZZMsGz1a6aV8DcCwRipvt0X3PBRcUvdXSEOc%3d – Site for LD1086V33 regulator
#### Power Supply ####
  1. http://www.jameco.com/webapp/wcs/stores/servlet/Product_10001_10001_2144286_-1 - Page for Tenergy 30201 battery
  1. http://www.jameco.com/webapp/wcs/stores/servlet/Product_10001_10001_2140349_-1 - Page for Tenergy 30006 battery
  1. http://www.mouser.com/ProductDetail/Renata/1000-0/?qs=jD0ByownhNCAtT53zynouA%3D%3D – Page for Renata 1000-0 battery