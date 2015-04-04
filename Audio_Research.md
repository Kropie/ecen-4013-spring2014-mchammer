# Audio Research #
#### Cris Slaughter ####


---


### Audio Driver Options ###
|Name|Recording Time (s)|Cost  ($)|SD card input|Supported formats|Operating Voltages|Minimum Input Impedance|
|:---|:-----------------|:--------|:------------|:----------------|:-----------------|:----------------------|
|VS1053B Audio Breakout|Dependent on SD card|24.95|Yes|mp3,WAV,midi,ogg|3.3V/5V|16Ω|
|ISD1932 Audio Breakout|64|19.95|No|---|2.4-5.5V|8Ω|
|WTV020SD Audio Breakout|Dependent on SD card|19.95|Yes|ad4|2.7-3.3V|8Ω|


**First Option – WTV020SD Breakout**

https://www.sparkfun.com/products/11125

This is the first option. The deciding factor in this over the ISD1932 is that it supports onboard SD card input and it also allows for a lower minimum input impedance. However, there are reports of issues with SD card compatibility.

**Second Option - ISD1932 Breakout**

https://www.sparkfun.com/products/10653b

This is chosen as the second option since it can be configured for 3.3/5V operating power modes, it is able to output to a minimum impedance of 8Ω, and it has support for 64 seconds of audio. However this is less convenient as the other options since audio will have to be sent to the board rather than just stored on SD card. Additionally, within the 64 seconds of allotted audio, there is only space for a maximum 8 sound effects.

**Third Option – VS1053B Breakout**

https://www.adafruit.com/products/1381

This is chosen as the third option due to the fact it can handle all audio processing on board, sounds can be stored on an SD card which is on the board, and it has a wider array of support for available audio formats. The only problem is that it requires a higher minimum input impedance.


---


### Speaker Options ###
|Name|Price($)|Freq Range(Hz)|Impedance(Ω)|Power Rating(mW)|Diameter(mm)|Depth(mm)|
|:---|:-------|:-------------|:-------------|:---------------|:-----------|:--------|
|254-PS610-RO|2.61|350-13k|8 |1000|57|9 |
|AS02808MR-2-R|3.37|600-20k|8 |500|28|5 |
|GSP01-R|2.69|330-8k|16|250|66|66|

**First Option - 254-PS610-RO**

http://www.mouser.com/ProductDetail/Kobitone/254-PS610-RO/?qs=sGAEpiMZZMuTkJYgZlQcSR139c8T%252bqsmxWcqBlhHLzw%3d

This was chosen as the first option due to the low price and wide frequency range, which is necessary for the first option since at least 8khz is needed to output of a 4 second effect with the ISD 1932. Additionally, due to its short depth it’s more likely it won’t take up much space.


**Second Option - AS02808MR-2-R Speaker**

http://www.mouser.com/ProductDetail/PUI-Audio/AS02808MR-2-R/?qs=sGAEpiMZZMuTkJYgZlQcSYrKg4qDmU5c3SvoIj1InEI%3d

This was selected as the second option due to the fact it has the desired impedance  for the audio breakout and a power rating that allows for safe dissipation of regardless of VDD level. Also, it’s depth is less than the first option which makes this a perfect option should large space restrictions appear.

**Third Option - GSP01-R Speaker**

http://www.jameco.com/webapp/wcs/stores/servlet/Product_10001_10001_31959_-1

Since the third option for the audio breakout requires a higher impedance, this was selected as the third option for the speaker. It’s also good since its frequency range is sufficient for the quality of audio this project will use.


---


### Code Outline ###
Record\_audio();  Will be used to initiate recording of selected audio files onto audio breakout board

Receive\_signal();Will be used to receive signal from other blocks to begin select\_audio();

Select\_audio(); Will be used to choose audio dependent on data received from Receivesignal();

Play\_audio(); Will be utilized to output audio through speaker connected to audio breakout board