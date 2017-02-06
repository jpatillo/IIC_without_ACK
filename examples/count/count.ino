#include <IIC_without_ACK.h>
#include "oledfont.c"   //The font!

#define I2C_SDA A4 
#define I2C_SCL A5

IIC_without_ACK oled(I2C_SDA, I2C_SCL);
int count = 0;

void setup() {
 oled.Initial();
}

void loop() {
  char displayStr[20];

  oled.Fill_Screen(0x00); // Clear the screen

  sprintf(displayStr, "#%i", count++);
  
  oled.Char_F6x8(0,1,displayStr); // Display the string on line 2

  delay(2000);
}
