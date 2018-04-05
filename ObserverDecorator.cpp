//
// Created by charles on 09/12/2017.
//

#include "ObserverDecorator.h"

void ObserverDecorator::Update() {
    _component->Update();
}

std::string ObserverDecorator::constructDisplayString() {
    return this->_component->constructDisplayString();
}

void ObserverDecorator::display() {
    this->_component->display();
}

ClockTimer *ObserverDecorator::get_subject() const {
    return this->_component->get_subject();
}

