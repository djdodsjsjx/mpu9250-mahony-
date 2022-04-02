#include "config.h"

float Velocity_KP=10,Velocity_KI=8;	              //�ٶȿ���PID����
float	Position_KP=10,Position_KI=0.38,Position_KD=50;  //λ�ÿ���PID����
long int Motor_A,Motor_B,Motor_C,Motor_D;           //���PWM����
long int Position_A,Position_B,Position_C,Position_D,Rate_A,Rate_B,Rate_C,Rate_D; //PID������ر���
long int Target_A,Target_B,Target_C,Target_D;       //���Ŀ��ֵ
int Encoder_A,Encoder_B,Encoder_C,Encoder_D;        //���������������
	
void data_config()
{
	
	
}

void init_config(void)
{  
	SysTick_Configuration();
	NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2);
	Scheduler_Setup();
	uart_init(500000); 
	Delay_ms(100);
	MPU9250_INIT();
//	TIM_INIT();
	
}

