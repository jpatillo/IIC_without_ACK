# IIC_without_ACK
Fork of the library that allows an Arduino to output text to a display using the SSD1306 chip.

Robust graphics libraries are huge. In an effort to save storage, libraries like Adafruit's GFX and U8glib may not be the best solution.  This library is minimalistic, but this projects that are mostly concerned with text and not fancy drawing will benefit greatly.

## Why this Repo Exists
The link in the files' heading which should point to the author's page does not seem to work, so I have made some changes to the library and posted them as a complete Arduino library.

This library does not receive input from the LCD. The ACK signal that would normally be sent by the LCD back to the master after each Byte will not be processed. The original intent is to support those devices that do not have the output pin wired.

This fork of the library is not meant to be as feature rich as Adafruit's or the U8glib. The goal is simply to output text to the display while using a small RAM footprint.

## How to Use It
Clone this repo into your Arduino libraries folder. For help using the library, see the example sketch. The library is exceedingly easy to use.

## Note
This library stores the font in program memory. As a result, RAM is not affected much, but each byte written to the display requires a read from the flash memory which is (relatively) slow.

The Fill_Screen and Fill_Line methods take time, so if your loop frequently clears and redraws the screen, you will experience blinking. Computers use buffers to handle this, but an Arduino project will likely not have memory to spare. Your project will have to find efficient ways of drawing to the screen.

## References
Chris Anderson has a nice introduction to the hardware. [http://www.kalazzerx.com/blue-oled-lcd-led-display-module-for-arduino/](http://www.kalazzerx.com/blue-oled-lcd-led-display-module-for-arduino/)

## Version

###1.4
* The font is now properly saved to flash memory so RAM is not unnecessarily wasted.

###1.3
* Added methods to turn the display on and off. They do not clear the display's memory, so turning the display off and then on results in the same image on screen.
* Added `Fill_Line(row, fill_Data)` method to easily clear a single line.
