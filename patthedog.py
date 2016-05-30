#!/usr/bin/env python

from gpiozero import OutputDevice
from time import sleep

patTheDog = OutputDevice(21)
patTheDog.on()
sleep(1)
patTheDog.off()

while True:
	sleep(29)
	patTheDog.on()
	sleep(1)
	patTheDog.off()

