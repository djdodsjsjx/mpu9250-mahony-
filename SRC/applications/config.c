#include "config.h"

float Velocity_KP=10,Velocity_KI=8;	              //速度控制PID参数
float	Position_KP=10,Position_KI=0.38,Position_KD=50;  //位置控制PID参数
long int Motor_A,Motor_B,Motor_C,Motor_D;           //电机PWM变量
long int Position_A,Position_B,Position_C,Position_D,Rate_A,Rate_B,Rate_C,Rate_D; //PID控制相关变量
long int Target_A,Target_B,Target_C,Target_D;       //电机目标值
int Encoder_A,Encoder_B,Encoder_C,Encoder_D;        //编码器的脉冲计数
	
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

