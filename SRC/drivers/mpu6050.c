#include "mpu6050.h"

uint8_t buffer[14];

void MPU6050_setClockSource(uint8_t source){
    MPU_IICwriteBits(0x68, 0x6B, 2, 3, source);
}

void MPU6050_setFullScaleGyroRange(uint8_t range) {
    MPU_IICwriteBits(0x68, 0x1B, 4, 2, range);
}

void MPU6050_setFullScaleAccelRange(uint8_t range) {
    MPU_IICwriteBits(0x68, 0x1C, 4, 2, range);
}


void MPU6050_resetEnabled(uint8_t enabled) {
    MPU_IICwriteBit(0x68, 0x6B, 7, enabled);
	Delay_ms(100);
}


void MPU6050_set_Gyro_Accel_outRange(uint8_t range) {
    MPU_IICwriteBits(0x68, 0x6C, 5, 6, range);
}

void MPU6050_set_SMPRT_DIV(uint8_t range) {
	  MPU_IICwriteByte(0x68,0x19,range);
}

void MPU6050_set_Gyro_DLPF_outRange(uint8_t range) {
    MPU_IICwriteBits(0x68, 0x1A, 2, 3, range);
}


void MPU6050_INT_Disabled(uint8_t enabled) {
    MPU_IICwriteBit(0x68, 0x38, 0, enabled);
}


void MPU6050_setSleepEnabled(uint8_t enabled) {
    MPU_IICwriteBit(0x68, 0x6B, 6, enabled);
}


void MPU6050_testConnection(void) {
	
   while(buffer[0] != 0x68){
			MPU_IICreadBytes(0x68, 0x75, 1, buffer);
	 };  
}

void MPU6050_setI2CMasterModeEnabled(uint8_t enabled) {
    MPU_IICwriteBit(0x68, 0x6A, 5, enabled);
}

void MPU6050_setI2CBypassEnabled(uint8_t enabled) {
    MPU_IICwriteBit(0x68, 0x37, 1, enabled);
}


void MPU6050_initialize(void) {
		MPU_IIC_Init();             //IIC��ʼ��
		MPU6050_testConnection();     //���MPU6050 �Ƿ��Ѿ�����
		MPU6050_resetEnabled(1);   //��λmpu6050  ����ʱ100ms
	  MPU6050_setSleepEnabled(0); //���빤��״̬
    MPU6050_setClockSource(2); //����ʱ��
		MPU6050_set_Gyro_Accel_outRange(0);  // ����������������Ǻ�������ٶ�����
		MPU6050_INT_Disabled(0);    //��ֹ�ж�
		MPU6050_set_SMPRT_DIV(0);   //������Ƶ
    MPU6050_setFullScaleGyroRange(3);//������������� +-1000��ÿ��
    MPU6050_setFullScaleAccelRange(0);	//���ٶȶ�������� +-2G
  	MPU6050_set_Gyro_DLPF_outRange(2);  //���������Ǻͼ��ٶȼƵĵ�ͨ�˲���
	  MPU6050_setI2CMasterModeEnabled(0);	 //����MPU6050 ����AUXI2C
	  MPU6050_setI2CBypassEnabled(1);	 //����������I2C��	MPU6050��AUXI2C	ֱͨ������������ֱ�ӷ���HMC5883L
}

