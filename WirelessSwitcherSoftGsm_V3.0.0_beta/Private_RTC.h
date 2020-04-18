#ifndef _PRIVATE_RTC_H
#define _PRIVATE_RTC_H

#include "User_Clock.h"
#include <RTClock.h>

#define USE_HEX false
#define USE_DEC true

class date{
public:
    void Update_RTC(unsigned char *buffer);
    void Get_RTC(unsigned char *buffer);
    void Init_Set_Alarm(void);
    void Set_Alarm(void);
	void Set_onehour_Alarm(void);
};

extern date Private_RTC;

//extern bool LowBalFlag;
extern unsigned char LowBalFlag;
extern bool gRTCTime_arrive_Flag;

#endif