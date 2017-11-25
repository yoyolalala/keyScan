#ifndef __OLED_I2C_H
#define	__OLED_I2C_H

#include "sys.h"

#define OLED_ADDRESS	0x78 //ͨ������0R����,������0x78��0x7A������ַ -- Ĭ��0x78

void I2C_Configuration(void);
void I2C_WriteByte(uint8_t addr,uint8_t data);
void OLED_Send_Cmd(unsigned char I2C_Command);
void OLED_Send_Data(unsigned char I2C_Data);
void OLED_Init(void);
void OLED_SetPos(unsigned char x, unsigned char y);
void OLED_Clear(void);
void OLED_ShowChar(u8 x,u8 y,u8 ch,u8 size);
void OLED_ShowString(u8 x,u8 y,u8 ch[],u8 size);
void OLED_ShowGB1616(u8 x0,u8 y0,const char p[],u8 size);
void OLED_ShowGB_String(u8 x0,u8 y0,const char *s,u8 size);
void OLED_ShowStr(u8 x,u8 y,const char *str,u8 size);
void OLED_ShowBMP(u8 x0,u8 y0,u8 x1,u8 y1,const u8 pic[]);
#endif
