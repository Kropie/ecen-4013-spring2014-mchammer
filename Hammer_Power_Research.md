# Hammer Power Research #
#### Sam Bretz ####


---


### Power Hardware ###
Requirements:
Output of 5V @ 4-5A max and 3.3V @ 1A max

Batteries:

Primary Option: 3x 18650 2200mAh 3.6V Lithium cells = 9V empty to 12.75V charged ($5.00), fit inside the handle

This solution works the best. High energy density, rechargeability, and profile to fit inside the handle.

Secondary Option: Lithium ion plate cells stored inside the head

Tertiary Option: Standard alkaline cells inside the handle

Primary option: LM2678-5.0 ($3.52+components) into LM3940($0.93)
Monolithic switching into LDO

Advantages:
  * Few parts
  * Moderately efficient 5V >85%, 3.3V >60%
  * 3.3V regulator doesn’t require a heatsink

Disadvantages:
  * Daisy chained supply leads to slightly more difficult diagnostic at the benefit of efficiency
  * Requires one inductor

http://www.ti.com/lit/ds/symlink/lm2678.pdf

http://www.ti.com/lit/ds/symlink/lm3940.pdf

**Secondary option: LT3742 Dual, 2-Phase Step-Down Switching Controller, 5V & 3.3V @ 4A ($3.29+components)**

Advantages:
  * Monolithic
  * High efficiency on 5V line under normal loads (>85%)
  * Gross over power for the 3.3V line

Disadvantages:
  * Low efficiency on 3.3V line under normal loads, <500mA (~60%)
  * Decently high number of accompanying parts, requires inductors
  * Slightly high difficulty

Datasheet: http://cds.linear.com/docs/en/datasheet/3742fa.pdf

**Tertiary option: LM1084-5.0 ($1.62), LM2937-3.3 (%$0.85)**

Full LDO system

Advantages:
  * Low part count
  * Simplicity

Disadvantages:
  * Lower efficiency compared to the other options, ~60% each stage
  * Will require significant heatsinking for 5V stage

Datasheets:

http://www.ti.com/lit/ds/symlink/lm1084.pdf

http://www.ti.com/lit/ds/snvs015e/snvs015e.pdf