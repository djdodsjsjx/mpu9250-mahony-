#ifndef __ENCODER_H
#define __ENCODER_H

#include "config.h"	 

#define ENCODER_TIM_PERIOD (u16)(65535)   //���ɴ���65535 ��ΪF103�Ķ�ʱ����16λ�ġ�

void Encoder_Init(void);
void Encoder_Init_TIM1(void);
void Encoder_Init_TIM2(void);
void Encoder_Init_TIM3(void);
void Encoder_Init_TIM4(void);
void Encoder_Init_TIM5(void);
int Read_Encoder(u8 TIMX);

void TIM2_IRQHandler(void);
//void TIM3_IRQHandler(void);
//void TIM4_IRQHandler(void);
//void TIM5_IRQHandler(void);

#endif