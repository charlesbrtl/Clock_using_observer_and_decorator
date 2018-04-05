//
// Created by charles on 09/12/2017.
//

#include <iostream>
#include "HoursDecorator.h"
void HoursDecorator::Update() {
    display();
}

void HoursDecorator::display() {
std::cout<<constructDisplayString()<<std::endl;
}

std::string HoursDecorator::constructDisplayString() {
    return (ObserverDecorator::constructDisplayString()+std::to_string(this->_component->get_subject()->getHour())+" Hours");
}
