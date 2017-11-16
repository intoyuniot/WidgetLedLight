/*
************************************************************************
* 作者:  IntoRobot Team    
* 版本:  V1.0.0
* 日期:  03-30-15
************************************************************************
功能描述：
led灯状态显示

所需器件:

*/

/*该头文件引用由IntoRobot自动添加.*/
#include <WidgetLedLight.h>

WidgetLedLight led;

#define LEDPIN D7

uint8_t count;

void setup() 
{
// put your setup code here, to run once.
	pinMode(LEDPIN,OUTPUT);
    led.begin();
}

void loop() 
{
// put your main code here, to run repeatedly.
	count++;
	if(count <= 125)
	{
		digitalWrite(LEDPIN,HIGH);
		led.displayLedStatus(1);
	}
	else if(count <= 250)
	{
		digitalWrite(LEDPIN,LOW);
		led.displayLedStatus(0);
	}
	else
	{
		count = 0;
	}
    
    delay(2000);
}
