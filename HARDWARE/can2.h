#ifndef __MY_CAN_H_
#define __MY_CAN_H_
#include "stm32f4xx.h"

#define mainMCU_ID             (0x71)  //Ö÷¿ØID

void CAN_Config(CAN_TypeDef* CANx);

void CAN2_RX0_IRQHandler(void);

u8 Can_Send_Msg(u8* msg, u8 len, u8 id);

void sendKeyPressInfo(u8 keyID,u8 isPressLong);
#endif
