#ifndef __LED_H
#define __LED_H
#include "sys.h"
#include "stm32f4xx.h"
#include "delay.h"
	 
#define leftKeyData PEin(7)
#define rightKeyData PEin(12)

//void ledRGB(u8 R,u8 G,u8 B);
//void ledInit(void);//≥ı ºªØ

void buzzerInit(void);
void buzzer(u8 time,u16 onTime,u16 offTime);

void keyInit(void);
void keyScan(void);
#endif
