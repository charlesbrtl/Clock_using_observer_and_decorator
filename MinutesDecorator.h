//
// Created by charles on 09/12/2017.
//

#ifndef QUESTIONCODE_MINUTESDECORATOR_H
#define QUESTIONCODE_MINUTESDECORATOR_H

#include <string>
#include "ObserverDecorator.h"

class MinutesDecorator : public ObserverDecorator{
public:
    MinutesDecorator()= default;
    explicit MinutesDecorator(DigitalClockObserver*_component):ObserverDecorator(_component){};
    void Update() override ;
    void display();
    std::string constructDisplayString();
};


#endif //QUESTIONCODE_MINUTESDECORATOR_H
