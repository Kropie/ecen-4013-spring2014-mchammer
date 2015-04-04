# Hammer Visual Research #
#### Sam Bretz ####


---


### LED display system: ###
Specs: 2x 33 WS2812B chains in parallel

Signal Specs:

24\*33 = 792 bits @ 800KHz

1: .8 uS high, .4 uS low, ±150ns

0: .4 uS high, .8 uS low, ±150ns

RES: >50uS low

**WS2812B:**

(100 for $26.22)

Advantages:
  * Serially addressable (!!!)
  * Excellent RGB display
  * High output and efficiency
  * Internal LED current driver

Disadvantages:
  * High power consumption, 5V @ 4.6A when displaying full white at full brightness
  * Data signal is not standard


---


### LED logic system: ###

**Primary Option:**

Internal pattern calculation with external co-processor for signal transmission

Advantages:
  * Simple pattern calculations do not take much time
  * All transmission timing and handling would be external
  * Does not interfere with any interrupts
  * SPI or other serial comms from the main chip will not be interrupted
  * Solves virtually all significant problems involving the LEDs

Disadvantages:
  * External PIC requiring at least 792 bits of RAM
  * Adds additional cost (~$5)

**Secondary Option:**

Timer interrupt based pin control with onboard pattern calculation

Advantages:
  * Doesn’t eat as many cycles at nop based bitbanging
  * Simple pattern calculations do not take much time

Disadvantages:
  * Cannot be interrupted by IR or else transmission signal will be incomplete

**Tertiary Option:**

Internal pattern calculation with nop based bitbanging

Advantages:
  * Simple pattern calculations do not take much time

Disadvantages:
  * Will take a relatively long time to send the signal 7920cycles@8MHz, 31680cycles@32MHz
  * Any interrupt of any kind will corrupt the signal (!!!)

http://www.adafruit.com/datasheets/WS2812B.pdf