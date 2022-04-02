#include "servo.h"

//=========   ��ת��   ==========
u16 angle_to_number(u16 angle)
{
	u16 number;
	if(angle <= 10)
    angle = 10;
  if(angle >= 300)
    angle = 300; 
	number=angle*1023.0/300.0;
	return number;
}

//========   ��ת��   ==========
u16 number_to_angle(u16 number)
{
	u16 angle=number*300.0/1023.0;
	return angle;
}



void servo_output(void)
{


}



