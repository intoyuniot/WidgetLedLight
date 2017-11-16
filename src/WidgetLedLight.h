#ifndef WIDGET_LEDLIGHT_H_
#define WIDGET_LEDLIGHT_H_

#include "application.h"

class WidgetLedLight : public WidgetBaseClass
{
    public:
        WidgetLedLight(uint8_t ucItem = 0);
        ~WidgetLedLight();
        void begin(void (*UserCallBack)(void) = NULL);
        void displayLedStatus(uint8_t ucVal);

    private:
        char pDataStatusTopic[64];
        uint8_t _Item = 0;

        void (*_EventCb)(void);
        void widgetBaseCallBack(uint8_t *payload, uint32_t len);
};

#endif
