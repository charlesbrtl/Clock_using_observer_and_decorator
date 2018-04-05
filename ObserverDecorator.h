//
// Created by charles on 09/12/2017.
//

#ifndef QUESTIONCODE_OBSERVERDECORATOR_H
#define QUESTIONCODE_OBSERVERDECORATOR_H
#include "Observer.h"
#include "DigitalClockObserver.h"
#include <string>

class ObserverDecorator : public DigitalClockObserver {
protected :
    DigitalClockObserver *_component;
public:
    ObserverDecorator()= default;
    std::string constructDisplayString();
    void Attach();
    ClockTimer *get_subject() const;
    explicit ObserverDecorator(DigitalClockObserver *_component):_component(_component){_component->get_subject()->Detach(_component);_component->get_subject()->Attach(this);};
    void Update() override ;
    void display();
};


#endif //QUESTIONCODE_OBSERVERDECORATOR_H
