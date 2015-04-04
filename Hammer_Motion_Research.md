# Hammer Motion Research #
#### Chase Meadors ####


---


### Motion Hardware ###
Deciding on the motion hardware was a significant research question due to my relative inexperience with low-level motion hardware.

Initially, I considered integrated solutions in the form of 6 DoF IMU IC packages. In particular, I considered the MAX21100 IMU from Maxim:

(picture)

The figure above shows a typical application circuit containing the MAX21100. The main features of the chip gleaned from the product webpage and the datasheet were:
  * SPI/I2C communication
  * FIFO Queue to facilitate data collection and less involvement from the MCU
  * Motion Merging Engine, which offers the ability to directly read device orientation as quaternion values

Another chip I considered with very similar specs and features was the MPU-6000 IMU from InvenSense.

After evaluation the motion needs of the project, I decided that these large integrated solutions simply offered too many features to justify. Looking on the simpler side, I considered analog solutions.

**Final Choice: ADXL325**

(picture)

The ADXL325 is small, low power, and measures up to 5 g’s of acceleration. Since the device simply supplies analog voltage, the A/D converter on the PIC can be used to get acceleration values.


---

### Motion Software ###
There are two gestures that the software is required to sense from the hammer. The first involves the user spinning the hammer at least 3 times to turn it on. The following figure shows the hammer in the midst of an approximate swinging motion (around the vertical axis) with the axes of the internally mounted accelerometer:

(picture)

A swing around this vertical axis will manifest as a significant amount of g-force on the negative z-axis (much more than 1g). It’s also worth noting that, depending on the angle at which the user holds the hammer, the accelerometer will also measure a fractional component of gravitational acceleration on the positive z-axis, yielding a slightly lower reading of the centripetal acceleration. However, this error will not have a very significant effect.

A mathematical algorithm to attempt to ensure the user must spin at least 3 times is as follows:

Suppose the accelerometer reports a negative-z-axis acceleration of a\_c - this is taken to be more than a chosen threshold acceleration that will be considered a spin. Tangential velocity is related to centripetal acceleration by:

> a<sub>c</sub> = v<sup>2</sup>/r

Then the tangential velocity of the head of the hammer (where the accelerometer will be mounted) is approximately:

> v(t) = √(a<sub>c</sub>(t)⋅r)

Where r is the radius of the spin – which will be approximately (but not exactly) equal to the distance from the base of the handle to the accelerometer.
The distance that the head of the hammer travels in three spins is three times the circumference, or:

> D = 6πr

So finally, the amount of time it would take a user at this given acceleration to spin the hammer three times would be:

> T<sub>spin</sub>(t) = D/v(t) =6πr/v(t)

All equations are functions of t, because a\_c of course varies in real time. T\_spin could be periodically recalculated, and the highest value could be used for the spin time. Once the time the user has been spinning passes T\_spin, the spin is considered complete. To further reduce the chance of error (and spinning less than three times for activation), a simple bias or offset could be added to T\_spin.


---


### Costs/BOM ###
|ADXL325BCPZ   |$2.77|
|:-------------|:----|
|PIC24FJ32GA102|$2.85|
|Total Cost    |$5.62|


---


### Sources ###
“MAX21100, Low-Power, Ultra-Accurate 6+3 DoF IMU”, Webpage, Retrieved from http://www.maximintegrated.com/en/products/analog/sensors-and-sensor-interface/MAX21100.html, Maxim, 10/1/14

“MAX21100 Datasheet”, Datasheet, Retrieved from http://datasheets.maximintegrated.com/en/ds/MAX21100.pdf, Maxim, 10/1/14

“ADXL325:  SMALL, LOW POWER, 3-AXIS ±5 G ACCELEROMETER”, Webpage, Retrieved from http://www.analog.com/en/mems-sensors/mems-inertial-sensors/adxl325/products/product.html, Analog Devices, 10/1/14

“ADXL325 Datasheet”, Datasheet, Retrieved from http://www.analog.com/static/imported-files/data_sheets/ADXL325.pdf, Analog Devices, 10/1/14