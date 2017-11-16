#include "WidgetLedLight.h"


WidgetLedLight::WidgetLedLight(uint8_t ucItem)
{
    _Item=ucItem;
    memset(pDataStatusTopic,0,sizeof(pDataStatusTopic));
    sprintf(pDataStatusTopic,"channel/ledLight_%d/data/status",_Item);
}

WidgetLedLight::~WidgetLedLight()
{

}

void WidgetLedLight::begin(void (*UserCallBack)(void))
{
}


void WidgetLedLight::displayLedStatus(uint8_t ucVal)
{
    IntoRobot.publish(pDataStatusTopic,ucVal);
}


void WidgetLedLight::widgetBaseCallBack(uint8_t *payload, uint32_t len)
{
}

