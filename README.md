# IIC_without_ACK
Fork of the library that allows an Arduino to output text to a display using the SSD1306 chip.


The link in the files' heading does not seem to work, so I am taking it upon myself to make some
changes to the library and post them. I did not write this library, nor am
I trying to take credit for it.

This library does not receive input from the LCD. The ACK signal that would
normally be sent by the LCD back to the master after each Byte will not be
received (or possibly not even sent by the LCD). 

The comments in the Initial() method were not all that helpful, and in most
cases, they were not even on the correct line. I checked the SSD1306
datasheet and made some changes. 

This fork of the library is not meant to be as feature rich as Adafruit's or
the U8glib. The goal is simply to output text to the display while using as
little memory as possible.

Shout out to CosminLazar for adding SRAM support! That was a good idea. His
fork is here: [https://github.com/CosminLazar/IIC_without_ACK-SSD1306](https://github.com/CosminLazar/IIC_without_ACK-SSD1306)
