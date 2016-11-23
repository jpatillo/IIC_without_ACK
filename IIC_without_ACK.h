/***************************************************************************
* 因为此版本的IIC通信没有ACK信号返回，所以现成的关于IIC通信的库不能用于本品。
*
* 第一次使用Arduino，也不太熟悉C++，所以这个库在使用起来可能不如Adafruit或
* U8glib的库那样方便……理解万岁。比如设置字体大小、显示任意尺寸BMP图片等功能，
* 后续会完善功能的！！！！
*
* 最新版本的“IIC_wtihout_ACK”会发布在 http://www.14blog.com/archives/1358
* 
* 建议和问题反馈，请发邮件至 hello14blog@gmail.com



The above link does not seem to work, so I am taking it upon myself to make some
changes to the library and post them. I did not write this library, nor am
I trying to take credit for it.

This library does not receive input from the LCD. The ACK signal that would
normally be sent by the LCD back to the master after each Byte will not be
received (or possibly not even sent by the LCD). 

The comments in the Initial() method were not all that helpful, and in most
cases, they were not even on the correct line of code. I checked the SSD1306
datasheet and made some changes. 

This fork of the library is not meant to be as feature rich as Adafruit's or
the U8glib. The goal is simply to output text to the display while using as
little memory as possible.
***************************************************************************/

#ifndef _IIC_without_ACK_H
#define _IIC_without_ACK_H

#if ARDUINO >= 100
 #include "Arduino.h"
#else
 #include "WProgram.h"
#endif

//#include <Adafruit_GFX.h>

#define BLACK 0
#define WHITE 1

class IIC_without_ACK
{
 public:
  IIC_without_ACK(int sda, int scl);
  
  void IIC_Start();
  void IIC_Stop();
  void Write_IIC_Byte(unsigned char IIC_Byte);
  void Write_IIC_Command(unsigned char IIC_Command);
  void Begin_IIC_Data();
  void IIC_SetPos(unsigned char x, unsigned char y);
  void Fill_Screen(unsigned char fill_Data);
  void Char_F6x8(unsigned char x, unsigned char y, const char ch[]);
//  void Char_F8x16(unsigned char x, unsigned char y,const char ch[]);
//  void CN_F16x16(unsigned char x, unsigned char y, unsigned char N);
  void Draw_BMP(unsigned char x0, unsigned char y0, unsigned char x1, unsigned char y1,const char BMP[]);
  void Initial();
  
  private:
  int _sda, _scl;
};
#endif