#ifndef CLOCK_TIME_HPP
#define CLOCK_TIME_HPP
#include <Arduino.h>

class ClockTime
{
private:
    uint8_t hours;
    uint8_t minutes;

public:
    ClockTime(uint8_t seconds);
    ClockTime(uint8_t hours,uint8_t minutes);
    ClockTime();
    ~ClockTime();

    uint8_t getHours();
    uint8_t getMinutes();
    void setHours(const uint8_t hours);
    void setMinutes(const uint8_t minutes);

private:
    ClockTime parseBySeconds(uint8_t seconds);

};





#endif CLOCK_TIME_HPP