#ifndef ALARM_CLOCK_HPP
#define ALARM_CLOCK_HPP
#include <Arduino.h>
#include <clockTime.hpp>
#include <GyverTM1637.h>
class AlarmClock
{
private:
GyverTM1637 *display = nullptr;
ClockTime time;
public:
    AlarmClock(uint8_t,uint8_t);
    ~AlarmClock();

    void update();

    void setTime(ClockTime);

    //0-3
    void signleSegmentBlink(uint8_t pos/*0-3*/);
    void allSegmentsBlink(bool);

};




#endif ALARM_CLOCK_HPP