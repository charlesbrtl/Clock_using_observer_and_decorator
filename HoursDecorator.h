//
// Created by charles on 09/12/2017.
//

#ifndef QUESTIONCODE_HOURSDECORATOR_H
#define QUESTIONCODE_HOURSDECORATOR_H

#include "ObserverDecorator.h"

class HoursDecorator :public ObserverDecorator{

public:
    HoursDecorator()= default;
    explicit HoursDecorator(DigitalClockObserver*_component):ObserverDecorator(_component){};
    void Update() override ;
    void display();
    std::string constructDisplayString();
};


#endif //QUESTIONCODE_HOURSDECORATOR_H
