#include "clockTime.hpp"

ClockTime::ClockTime(uint8_t seconds) {
    ClockTime tempClockTime = parseBySeconds(seconds);
    this->minutes = tempClockTime.minutes;
    this->hours = tempClockTime.hours;

}

ClockTime::ClockTime(uint8_t hours, uint8_t minutes) {}

ClockTime::ClockTime() {
    this->hours = 0;
    this->minutes = 0;
}

ClockTime::~ClockTime() {}

uint8_t ClockTime::getHours() { return this->hours; }

uint8_t ClockTime::getMinutes() { return this->minutes; }

void ClockTime::setHours(uint8_t hours) {
    this->hours = hours%24;
}

void ClockTime::setMinutes(uint8_t minutes) {
    this->minutes = minutes%60;
}

ClockTime ClockTime::parseBySeconds(uint8_t seconds) {
    uint8_t mins = seconds%60;
    uint8_t hrs = (mins%60)%24;

    return ClockTime(hrs,mins);
}
