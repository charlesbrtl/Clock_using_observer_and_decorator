//
// Created by charles on 09/12/2017.
//
#include "ClockTimer.h"
#include "DigitalClockObserver.h"
#include "MinutesDecorator.h"
#include "HoursDecorator.h"
#include <iostream>
int main() {
    //Create a ClockTimer to be observed
    ClockTimer *timer = new ClockTimer();

    //Create a DigitalClock that is connected to the ClockTimer††
    DigitalClockObserver *digitalClock = new DigitalClockObserver(timer);
    digitalClock = new MinutesDecorator(digitalClock);
    digitalClock = new HoursDecorator(digitalClock);
    //Advancing the ClockTimer updates the DigitalClock
    //as Tick() calls Update() after it changed its state
    int secs;
    std::cout << "Enter number of seconds to count: ";
    std::cin >> secs;
    timer->start(secs);
   // int j;  cin >> j;

    return 0;
}