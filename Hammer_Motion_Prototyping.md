# Motion Research #
#### Chase Meadors ####


---


### Motion Hardware inputs: ###

|Name|Description|Expected Range|
|:---|:----------|:-------------|
|Physical Motion|Movement of device|-3 to 3g|

### Motion hardware outputs: ###
|Name|Description|Expected Range|
|:---|:----------|:-------------|
|Z-axis|Analog time-varying signal|0-3.3V|

### Motion Processing functions ###
|Name|Description|Input|Output|
|:---|:----------|:----|:-----|
|readADCPercent|Returns ADC measurement of the Z-axis signal|None|double 0.0 – 100.0|
|checkSpinComplete|Analyzes the current input and a history of inputs to determine if a spin has occurred|None|1 if a spin has occurred, 0 otherwise|
|checkThrustComplete|Analyzes the current input and a history of inputs to determine if a thrust has occurred|None|1 if a thrust has occurred, 0 otherwise|
|resetMotionHistory|Resets motion algorithm state|None|None|
