#include "can2.h"
#include <string.h>
/* Private functions ---------------------------------------------------------*/
/**
  * @brief  Initialization for CAN
  * @param  None
  * @retval None
  */
u8 mbox_queue[3]={0};
u8 mbox_index = 0;

void CAN_Config(CAN_TypeDef* CANx)
{
	GPIO_InitTypeDef         GPIO_InitStructure;
	CAN_InitTypeDef          CAN_InitStructure;
	CAN_FilterInitTypeDef    CAN_FilterInitStructure;      
	NVIC_InitTypeDef         NVIC_InitStructure;


	if( CANx == CAN1 )
	{  
		 CANx = CAN1;				//为底层发送报文选择can口
		/* Enable GPIO clock */
		RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOB, ENABLE);

		/* Enable CAN clock */
		RCC_APB1PeriphClockCmd(RCC_APB1Periph_CAN1, ENABLE);

		/* Configure CAN RX and TX pins */
		GPIO_InitStructure.GPIO_Pin = GPIO_Pin_8 | GPIO_Pin_9;
		GPIO_InitStructure.GPIO_Mode = GPIO_Mode_AF;
		GPIO_InitStructure.GPIO_OType = GPIO_OType_PP;
		GPIO_InitStructure.GPIO_PuPd  = GPIO_PuPd_UP;
		GPIO_Init(GPIOB, &GPIO_InitStructure);

		/* Connect CAN pins to AF9 */
		GPIO_PinAFConfig(GPIOB, GPIO_PinSource8, GPIO_AF_CAN1);
		GPIO_PinAFConfig(GPIOB, GPIO_PinSource9, GPIO_AF_CAN1);				
	}
	else if( CANx == CAN2 )
	{  
		 CANx = CAN2;				//为底层发送报文选择can口
		/* Enable GPIO clock */
		RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOB, ENABLE);

		/* Enable CAN clock */
		RCC_APB1PeriphClockCmd(RCC_APB1Periph_CAN1 | RCC_APB1Periph_CAN2, ENABLE);

		/* Configure CAN RX and TX pins */
		GPIO_InitStructure.GPIO_Pin = GPIO_Pin_12 | GPIO_Pin_13;
		GPIO_InitStructure.GPIO_Mode = GPIO_Mode_AF;
		GPIO_InitStructure.GPIO_OType = GPIO_OType_PP;
		GPIO_InitStructure.GPIO_PuPd  = GPIO_PuPd_UP;
		GPIO_Init(GPIOB, &GPIO_InitStructure);

		/* Connect CAN pins to AF9 */
		GPIO_PinAFConfig(GPIOB, GPIO_PinSource13, GPIO_AF_CAN2);
		GPIO_PinAFConfig(GPIOB, GPIO_PinSource12, GPIO_AF_CAN2);			
	}

	/* CAN register init */
	CAN_DeInit(CANx);
	CAN_StructInit(&CAN_InitStructure);	 

	/* CAN cell init */
	CAN_InitStructure.CAN_TTCM = DISABLE;    
	CAN_InitStructure.CAN_ABOM = DISABLE;    
	CAN_InitStructure.CAN_AWUM = DISABLE;  
	CAN_InitStructure.CAN_NART = DISABLE;    
	CAN_InitStructure.CAN_RFLM = DISABLE;  
	CAN_InitStructure.CAN_TXFP = ENABLE;    
	CAN_InitStructure.CAN_Mode = CAN_Mode_Normal;
	CAN_InitStructure.CAN_SJW  = CAN_SJW_1tq;

	/* Baudrate = 1Mbps (CAN clocked at 42 MHz) */
	CAN_InitStructure.CAN_BS1 = CAN_BS1_9tq;
	CAN_InitStructure.CAN_BS2 = CAN_BS2_4tq;
	CAN_InitStructure.CAN_Prescaler = 3;     //CAN波特率42/(1+9+4)/3=1Mbps
	CAN_Init(CANx, &CAN_InitStructure);
	
	if( CANx == CAN2 ){

	/* CAN filter init */        /* CAN filter init */
        CAN_FilterInitStructure.CAN_FilterNumber = 14;                        
        CAN_FilterInitStructure.CAN_FilterMode = CAN_FilterMode_IdMask;      
        CAN_FilterInitStructure.CAN_FilterScale = CAN_FilterScale_32bit;     
        CAN_FilterInitStructure.CAN_FilterIdHigh = (((u32)0x0012<<21)&0xFFFF0000)>>16;               
        CAN_FilterInitStructure.CAN_FilterIdLow = (((u32)0x0012<<21)|CAN_ID_STD|CAN_RTR_DATA)&0xFFFF;                     
        CAN_FilterInitStructure.CAN_FilterMaskIdHigh = 0x0000;           
        CAN_FilterInitStructure.CAN_FilterMaskIdLow = 0x0000;               
        CAN_FilterInitStructure.CAN_FilterFIFOAssignment = 0;               
        CAN_FilterInitStructure.CAN_FilterActivation = ENABLE;
        CAN_FilterInit(&CAN_FilterInitStructure);
	}else if(CANx == CAN1)
	{	/* CAN filter init */
		CAN_FilterInitStructure.CAN_FilterNumber = 0;                        
		CAN_FilterInitStructure.CAN_FilterMode = CAN_FilterMode_IdMask;      
		CAN_FilterInitStructure.CAN_FilterScale = CAN_FilterScale_32bit;     
	//	CAN_FilterInitStructure.CAN_FilterIdHigh = 0x0000<<5;               
	//	CAN_FilterInitStructure.CAN_FilterIdLow = 0x0000;      
		CAN_FilterInitStructure.CAN_FilterIdHigh = 0x4000;
		CAN_FilterInitStructure.CAN_FilterIdLow = 0x0000;
			
		CAN_FilterInitStructure.CAN_FilterMaskIdHigh = 0x4000;           
		CAN_FilterInitStructure.CAN_FilterMaskIdLow = 0x0006;               
		CAN_FilterInitStructure.CAN_FilterFIFOAssignment = 0;               
		CAN_FilterInitStructure.CAN_FilterActivation = ENABLE;
		CAN_FilterInit(&CAN_FilterInitStructure);	
		
	}


	if( CANx == CAN1 )//用来自检
	{  
		/* CAN FIFO0 message pending interrupt enable */ 
		CAN_ITConfig(CAN1,CAN_IT_FMP0, ENABLE);

		/* Enable the CAN1 global Interrupt */
		NVIC_InitStructure.NVIC_IRQChannel = CAN1_RX0_IRQn;
		NVIC_InitStructure.NVIC_IRQChannelPreemptionPriority = 9;
		NVIC_InitStructure.NVIC_IRQChannelSubPriority = 0;
		NVIC_InitStructure.NVIC_IRQChannelCmd = ENABLE;
		NVIC_Init(&NVIC_InitStructure);
	}
	else if( CANx == CAN2 )
	{
		/* CAN FIFO0 message pending interrupt enable */ 
		CAN_ITConfig(CAN2,CAN_IT_FMP0, ENABLE);

		/* Enable the CAN2 global Interrupt */
		NVIC_InitStructure.NVIC_IRQChannel = CAN2_RX0_IRQn;
		NVIC_InitStructure.NVIC_IRQChannelPreemptionPriority = 10;
		NVIC_InitStructure.NVIC_IRQChannelSubPriority = 0;
		NVIC_InitStructure.NVIC_IRQChannelCmd = ENABLE;
		NVIC_Init(&NVIC_InitStructure);	
	}
}

void CAN2_RX0_IRQHandler(void)
{
	CanRxMsg RxMessage;
	if ((CAN2->RF0R & CAN_RF0R_FMP0) != RESET) //if (CAN_GetITStatus(CAN2,CAN_IT_FMP0) != RESET) 
	{
		//CAN_Receive(CAN2, CAN_FIFO0, &RxMessage);
		RxMessage.StdId = (uint32_t)0x000007FF & (CAN2->sFIFOMailBox[CAN_FIFO0].RIR >> 21);
		RxMessage.DLC = (uint8_t)0x0F & CAN2->sFIFOMailBox[CAN_FIFO0].RDTR;
		/* Get the data field */
		memcpy(&RxMessage.Data[0], (const void *)&CAN2->sFIFOMailBox[CAN_FIFO0].RDLR, 8);
		/* Release FIFO0 */
		CAN2->RF0R |= CAN_RF0R_RFOM0;
//		if (RxMessage.StdId == 0x71)	/*原始陀螺仪信息*/
//		{
//			//memcpy(&angleTmp, &RxMessage.Data[0], 4);
//		}
	}

//  CanRxMsg RxMessage;
//  
//  if (CAN_GetITStatus(CAN2,CAN_IT_FMP0) != RESET) 
//  {
//    CAN_Receive(CAN2, CAN_FIFO0, &RxMessage); 
//    if(RxMessage.StdId == CAN_ID_MASTER_CONTROL)
//    {
//        if(RxMessage.DLC == 2 && RxMessage.Data[0] == 0x55 && RxMessage.Data[1] == 0xaa)
//          NVIC_SystemReset();
//        else if(RxMessage.DLC == 2 && RxMessage.Data[0] == 0x55 && RxMessage.Data[1] == 0xee){
//          reset_flag=1;  /*重置正交码盘坐标系*/
//					SendGetCalFlag();
//				}
//        else if(RxMessage.DLC == 2 && RxMessage.Data[0] == 0x55 && RxMessage.Data[1] == 0xff)
//          wake_flg=1;
//				else if(RxMessage.DLC == 8 && RxMessage.Data[0] == 0x55 && RxMessage.Data[1] == 0xcc){
//				  	memcpy(&angle, & RxMessage.Data[4], sizeof(float));	
//					  SendGetCalFlag();//发送校准完毕信号
//				}
//    }
//  }
	//上面和下面注释掉的都可以用

//	 CanRxMsg RxMessage;
//  
//	if (CAN_GetITStatus(CAN2,CAN_IT_FMP0) != RESET) 
//	{
//		CAN_Receive(CAN2, CAN_FIFO0, &RxMessage); 
//		if(RxMessage.StdId == globalCAN_ID_ANGLE_OMIGA)
//		{
//			memcpy(&angleTmp, &RxMessage.Data[0], 4);
//			printf("angTmp = %f\r\n",angleTmp);
//		}
//	}
}

u8 Can_Send_Msg(u8* msg, u8 len, u8 id)
{
    u8 mbox;
  //  u16 i=0;
    CanTxMsg TxMessage;
    TxMessage.StdId=id;					 	//标准标识符，11位
    TxMessage.IDE=CAN_Id_Standard;	        //使用标准标识符
    TxMessage.RTR=CAN_RTR_Data;			    //发送数据帧
    TxMessage.DLC=len;						//发送len字节
    
    memcpy(&TxMessage.Data[0], &msg[0], len*sizeof(u8));
//    for(i=0;i<len;i++)
//        TxMessage.Data[i]=msg[i];
    mbox= CAN_Transmit(CAN2, &TxMessage);     //获取邮箱号
    mbox_queue[mbox_index] = mbox;
    mbox_index++;
    if(mbox_index > 2)
    mbox_index = 0;
//     while((CAN_TransmitStatus(CAN_Num, mbox)!=CAN_TxStatus_Ok)&&(i<0xfff))i++;	//等待发送结束  
//     if(i>=0xfff)return 1;
    return 0;
}

void sendKeyPressInfo(u8 keyID,u8 isPressLong)
{
	CanTxMsg TxMessage;
	
	TxMessage.StdId = mainMCU_ID;//如果控制器ID改变，修改这里
	TxMessage.DLC = 2;//必须为2	   
	TxMessage.IDE = CAN_Id_Standard;
	TxMessage.RTR = CAN_RTR_Data;

	TxMessage.Data[0] = keyID;
	if(isPressLong)
		TxMessage.Data[1] = 0x01;
	else TxMessage.Data[1] = 0x00;
	CAN_Transmit(CAN2, &TxMessage);
}
