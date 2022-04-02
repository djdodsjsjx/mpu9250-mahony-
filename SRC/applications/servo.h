#ifndef __SERVO_H
#define __SERVO_H
#include "config.h"

#define SERVO_TIM_ARR  19999
#define SERVO_TIM_PSC  71

void pwm_servo_init(void);
void position(u16 degrees);
	
u16 angle_to_number(u16 angle);
u16 number_to_angle(u16 number);;
int Position_PID_1 (int Encoder,int Target);
int Position_PID_2 (int Encoder,int Target);
int Position_PID_3 (int Encoder,int Target);
int Position_PID_4 (int Encoder,int Target);
int Position_PID_5 (int Encoder,int Target);
int Position_PID_6 (int Encoder,int Target);
int Position_PID_7 (int Encoder,int Target);
int Position_PID_8 (int Encoder,int Target);
int Position_PID_9 (int Encoder,int Target);
int Position_PID_10(int Encoder,int Target);
int Position_PID_11(int Encoder,int Target);
int Position_PID_12(int Encoder,int Target);
void servo_pid(void);
void servo_output(void);
#endif
