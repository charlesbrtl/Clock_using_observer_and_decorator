//
// Created by charles on 09/12/2017.
//

#include "MinutesDecorator.h"
#include <iostream>

void MinutesDecorator::Update() {
display();
}

std::string MinutesDecorator::constructDisplayString() {
    return (ObserverDecorator::constructDisplayString()+std::to_string(this->_component->get_subject()->getMinute())+" minutes");
}

void MinutesDecorator::display() {
    cout << constructDisplayString() << endl;
}

