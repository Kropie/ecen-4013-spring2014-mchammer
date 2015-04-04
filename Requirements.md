# Requirements #


---


  1. **Cloud Description**
    1. A standalone module that will emit MIRP<sup>1</sup> packets when signaled by the hammer
    1. The device must be able to shoot IR 360° around with a 45° vertical spread and 10’ radius
    1. The device must be self-powered without any external power source
    1. The cloud will only deal as much damage as the hammer’s health
  1. **Activation Mechanism**
    1. The hammer must be powered off until it is spun
    1. The hammer must communicate to the cloud to initiate attack after settling (thus, it must know whether it is spinning or being pointed at the cloud)
    1. The device is considered ON after a minimum of 3 spins
    1. After being turned ON, the hammer must go through its charging process
  1. **IR Transmission**
    1. The hammer communicates to the cloud wirelessly (IR, Bluetooth, etc.)
    1. If IR, the hammer and cloud will communicate through a custom dummy packet in order to not interfere with the other projects’ emissions
    1. A user will use the hammer to transmit a number of packets to the cloud, which will correspond to the amount of attack the cloud will deal
    1. The hammer must be able to absorb packets dealt by other weapons
    1. The cloud’s transmissions must NOT affect the hammer’s health
  1. **Power**
    1. Both devices must not be powered by external power sources
    1. The hammer must be in an off state or low power mode before activation
    1. The hammer must return to its low power state if not used after 20 seconds
    1. Both devices must be able to last a normal gaming session of 2 hours
  1. **Indication**
    1. Audio and visual indication must be present on both the hammer and the cloud
    1. These effects must indicate the communication and any events happening in the project’s normal routine (less is NOT more; we want pizazz)
    1. The health amount must be shown in some form on the hammer
    1. Must be audible and visible from 20’ distance
  1. **Form Factor**
    1. The hammer must NOT have buttons (reset button for software is acceptable)
    1. There must be no loose parts in the hammer (it has to spin!)
    1. No wiring should be visible from the outside
    1. The cloud should be no more than 15 square inches
    1. Hammer must be reasonably-sized and able to be held in one hand
  1. **Communication with MAGE System**
    1. The hammer interacts with the MAGE system through MIRP packets and CANbus
    1. The hammer will have to be able to receive valid attack MIRP packets
    1. The hammer must be able to transmit an “I’m dead” signal through CANbus to the HIU if the unit is overloaded

---

<sup>1</sup> MAGE Infrared Protocol – http://mage.okstate.edu/doc/ir/MIRP.pdf

---


See <a href='http://ecen4013.okstate.edu/docs/project2/fa2014/Hammer.pdf'>here</a> for original document