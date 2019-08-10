# LunarLanderSAO

A SAO for the Lunar Lander badge (or other badges supporting the 1.69bis SAO standard).

The schematic is [here](/schematic.pdf "here").

## Assembling the kit

If you have a LunarLander SAO kit, it will have the attiny85, the capacitors and the resistors already soldered to the back of the badge ![SAO1](/images/back.jpg "back of the SAO kit")

You will be soldering six LEDs to the front of the badge, and the SAO connector to the back.
![SAO2](/images/front_no_LEDs_arrows.jpg "front of the SAO kit")

We'll start with the LEDs.  Take a close look at the LEDs; you will see two tiny green dots at one end ![LED1](/images/zoomedLED.jpg "zooming")

LEDs must be soldered to the SAO with the correct polarity; this means the green dots must point towards the top of the lander for the LEDs at the sides (on the pads marked with green arrows), and face outwards for the ones at the lower edge (as shown with the green arrows).   ![LED2](/images/LEDs_attached.jpg "LEDs attached").

The SAO connector is a keyed connector that provides power for the badge.  Some SAOs are more sophisticated and use the remaining four pins on the connector to interact with a badge.

The connector is simple through-hole soldering.

![Connector](/images/connectorAttached.jpg "connector attached")

## Hacking the SAO

The SAO only uses power and ground connections from the badge.  The red arrow indicates the power connection; the yellow is ground.  If you want to use a different way of powering the SAO, these are the wires you need.  The SAO needs 3.3V, and could be powered by a 3V coin cell battery if you want.

We programmed the SAO's attiny85 using a 8 pin SOIC clip with a TinyUSB programmer, and Arduino IDE. You'll need to download the attiny85 driver for Arduino because it is not included.

