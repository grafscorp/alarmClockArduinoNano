#include <Arduino.h>
#include <alarmClock.hpp>

#define CLK 6
#define DIO 7

AlarmClock alarmClock(CLK,DIO);


uint8_t data[4];

void setup()
{
  alarmClock.setTime(ClockTime(10,30));
  alarmClock.update();
}

void loop()
{

}

