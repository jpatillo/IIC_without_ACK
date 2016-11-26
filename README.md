#Readme IIC_without_ACK
Fork of the library that allows an Arduino to output text to a display using the SSD1306 chip.

##Why this Repo Exists
The link in the files' heading which should point to the author's page does not seem to work, so I have made some changes to the library and posted them as a complete Arduino library.

This library does not receive input from the LCD. The ACK signal that would normally be sent by the LCD back to the master after each Byte will not be processed. The original intent is to support those devices that do not have the output pin wired. 

This fork of the library is not meant to be as feature rich as Adafruit's or the U8glib. The goal is simply to output text to the display while using as little memory as possible.

##How to Use It
See the example sketch. The library is exceedingly easy to use.

##References
Chris Anderson has a nice introduction to the hardware. [http://www.kalazzerx.com/blue-oled-lcd-led-display-module-for-arduino/](http://www.kalazzerx.com/blue-oled-lcd-led-display-module-for-arduino/)
  
