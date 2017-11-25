/*
 * @Author: yoyolalala 
 * @Date: 2017-11-22
 * @File description: remote control
 */
#include "stm32f4xx.h"
#include "usart.h"
#include "delay.h"
#include "gpio.h"
#include "can2.h"
#include "OLED_I2C.h"
#include "timer.h"
#include <stdbool.h>

extern unsigned char leftTrg;
extern unsigned char leftCont;
extern unsigned char leftRelease;
extern unsigned char rightTrg;
extern unsigned char rightCont;
extern unsigned char rightRelease;

extern u8 time500msCount;

void setup()
{
	NVIC_PriorityGroupConfig(NVIC_PriorityGroup_4);
	delay_init(168);
	keyInit();
	CAN_Config(CAN2);//���ֻ����CAN2 ��ʼ��ʱҪ��CAN1��ʱ��Ҳʹ����
	TIM3_Int_Init(5000-1,8400-1);//500ms
	buzzerInit();
	uart3Init(115200);
	I2C_Configuration();
	OLED_Init();
	OLED_ShowGB_String(0,0,"���ӿƼ���ѧ",16);
//	OLED_ShowString(0,25,"key scan",16);
	OLED_ShowString(0,40,"all ready!",16);
}

int main(void)
{
	setup();
	while(1)
	{
		static bool isLeftContLong = false;
		keyScan();
		delay_ms(10);
		if(leftCont && !leftTrg && !leftRelease)
		{
			if(time500msCount >= 5)
			{
				/*�����Ĺ��ܴ���*/                
				sendKeyPressInfo(0x01,0x01);
				buzzer(1,500,0);
				OLED_Clear();
				OLED_ShowString(0,24,"Key1 LongPress",16);
				/*�����Ĺ��ܴ���*/
				TIM_Cmd(TIM3,DISABLE);
				time500msCount = 0;
				isLeftContLong = true;
			}
		}
		if(leftRelease)
		{
			if(!isLeftContLong)
			{
				/*�̰��Ĺ��ܴ���*/
				sendKeyPressInfo(0x01,0x00);
				buzzer(1,50,0);
				OLED_Clear();
				OLED_ShowString(0,24,"Key1 ShortPress",16);
				/*�̰��Ĺ��ܴ���*/
				TIM_Cmd(TIM3,DISABLE);
				time500msCount = 0;
			}else isLeftContLong = false;
		}
		
		if(rightRelease)
		{
			OLED_Clear();
			OLED_ShowString(0,24,"Key5 ShortPress",16);
			buzzer(1,50,10);
		}
	}
}
