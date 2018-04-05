#pragma once
#include "Observer.h"
#include "ClockTimer.h"

class DigitalClockObserver : public Observer {
  public:
	DigitalClockObserver();
	explicit DigitalClockObserver(ClockTimer* s);
	~DigitalClockObserver();
    ClockTimer *get_subject() const;
    void Update() override ;
	void display(); 
	std::string constructDisplayString();
  private:
	ClockTimer *_subject;
};
