#include "alarmClock.hpp"

AlarmClock::AlarmClock(uint8_t clk, uint8_t dio) {
    *display = GyverTM1637(clk,dio);
}

AlarmClock::~AlarmClock() {
    delete display;
}

void AlarmClock::update() {
    display->displayClock(
        this->time.getHours(),
        this->time.getMinutes()
    );
}

void AlarmClock::setTime(ClockTime newTime) {
    this->time = newTime;
    update();
}

void AlarmClock::signleSegmentBlink(uint8_t pos) {
    
}

void AlarmClock::allSegmentsBlink(bool) {}
