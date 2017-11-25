#include "gpio.h"

//void ledRGB(u8 R,u8 G,u8 B)
//{
//	PCout(0)=B;
//	PCout(2)=R;
//	PCout(3)=G;
//}

//void ledInit()
//{
//	GPIO_InitTypeDef  GPIO_InitStructure;
//	RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOB|RCC_AHB1Periph_GPIOC|RCC_AHB1Periph_GPIOD, ENABLE);

//	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_0 | GPIO_Pin_2|GPIO_Pin_3;
//	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_OUT;
//	GPIO_InitStructure.GPIO_OType = GPIO_OType_PP;
//	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_100MHz;
//	GPIO_InitStructure.GPIO_PuPd = GPIO_PuPd_UP;
//	GPIO_Init(GPIOC, &GPIO_InitStructure);

//	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_10; //KEY0 KEY1 KEY2对应引脚
//	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IN;//普通输入模式
//	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_100MHz;//100M
//	GPIO_InitStructure.GPIO_PuPd = GPIO_PuPd_UP;//上拉
//	GPIO_Init(GPIOB, &GPIO_InitStructure);//初始化GPIOE2,3,4

//	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_8; //KEY0 KEY1 KEY2对应引脚
//	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IN;//普通输入模式
//	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_100MHz;//100M
//	GPIO_InitStructure.GPIO_PuPd = GPIO_PuPd_UP;//上拉
//	GPIO_Init(GPIOD, &GPIO_InitStructure);//初始化GPIOE2,3,4


//	ledRGB(0,0,0);
//}

void buzzerInit(void)
{
	GPIO_InitTypeDef  GPIO_InitStructure;
	RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOE, ENABLE);

	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_4;
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_OUT;
	GPIO_InitStructure.GPIO_OType = GPIO_OType_PP;
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_100MHz;
	GPIO_InitStructure.GPIO_PuPd = GPIO_PuPd_UP;
	GPIO_Init(GPIOE, &GPIO_InitStructure);
}

void buzzer(u8 time,u16 onTime,u16 offTime)
{
	for(int i = 0;i < time;i++)
	{
		PEout(4) = 1;
		delay_ms(onTime);
		PEout(4) = 0;
		delay_ms(offTime);
	}
}

void keyInit(void)
{
	GPIO_InitTypeDef  GPIO_InitStructure;
	RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOE, ENABLE);
	
	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_7|GPIO_Pin_12;
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IN;
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_100MHz;
	GPIO_InitStructure.GPIO_PuPd = GPIO_PuPd_UP;
	GPIO_Init(GPIOE, &GPIO_InitStructure);
}

unsigned char leftTrg;
unsigned char leftCont;
unsigned char leftRelease;
unsigned char rightTrg;
unsigned char rightCont;
unsigned char rightRelease;
/*
没有按键按下时 trg cont release均为0
按键按下的一瞬间 trg = 1,cont = 1
按键常按时 只有cont = 1
按键松开的一瞬间 只有release = 1
按键完全松开 全为0
*/
void keyScan(void)
{
	static unsigned char leftKey,rightKey;
	if(leftKeyData == 1)
		leftKey = 0xff;
	else leftKey = 0xfe;
	if(rightKeyData == 1)
		rightKey = 0xff;
	else rightKey = 0xfe;
	
	unsigned char leftReadData =(leftKey) ^ 0xff;
	leftTrg = leftReadData & (leftReadData ^ leftCont);
	leftRelease = leftReadData ^ leftTrg ^ leftCont;
	leftCont = leftReadData;
//	printf("leftTrg = %d\r\n",leftTrg);
//	printf("leftRelease = %d\r\n",leftRelease);
//	printf("leftCont = %d\r\n\r\n",leftCont);
	unsigned char rightReadData = (rightKey) ^ 0xff;
	rightTrg = rightReadData & (rightReadData ^ rightCont);
	rightRelease = rightReadData ^ rightTrg ^ rightCont;
	rightCont = rightReadData;
	if(leftTrg)
		TIM_Cmd(TIM3,ENABLE);
}
