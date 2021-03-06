#include "show.h"

void oled_show(void)
{

//	OLED_ShowString(8,0,"TROT_TIMES:");
//	OLED_ShowNumber(96,0,TROT_TIMES,3,16);
	OLED_ShowString(8,0,"IMU_ROL:");
	if(Dog_ROL>=0)
	{
		OLED_ShowChar(80,0,'+',16,1);
		OLED_ShowNumber(88,0,Dog_ROL,3,16);
	}
	else
	{
		OLED_ShowChar(80,0,'-',16,1);
		OLED_ShowNumber(88,0,-Dog_ROL,3,16);
	}
	
	OLED_ShowString(8,16,"IMU_PIT:");
	if(Dog_PIT>=0)
	{
		OLED_ShowChar(80,16,'+',16,1);
		OLED_ShowNumber(88,16,Dog_PIT,3,16);
	}
	else
	{
		OLED_ShowChar(80,16,'-',16,1);
		OLED_ShowNumber(88,16,-Dog_PIT,3,16);
	}
	
	
	OLED_ShowString(8,32,"OPMV_DEG:");
	if(opmv.lt.angle>=0)
	{
		OLED_ShowChar(80,32,'+',16,1);
		OLED_ShowNumber(88,32,opmv.lt.angle,3,16);
	}
	else
	{
		OLED_ShowChar(80,32,'-',16,1);
		OLED_ShowNumber(88,32,-opmv.lt.angle,3,16);
	}
	
	OLED_ShowString(8,48,"OPMV_ADD:");
	if(opmv.lt.deviation>=0)
	{
		OLED_ShowChar(80,48,'+',16,1);
		OLED_ShowNumber(88,48,opmv.lt.deviation,3,16);
	}
	else
	{
		OLED_ShowChar(80,48,'-',16,1);
		OLED_ShowNumber(88,48,-opmv.lt.deviation,3,16);
	}
	
	
	OLED_Refresh_Gram();	
}


