cmake_minimum_required(VERSION 3.8)
project(QuestionCode)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        ClockDriver.cpp
        ClockTimer.cpp
        ClockTimer.h
        DigitalClockObserver.cpp
        DigitalClockObserver.h
        Observer.cpp
        Observer.h
        Subject.cpp
        Subject.h ObserverDecorator.cpp ObserverDecorator.h MinutesDecorator.cpp MinutesDecorator.h HoursDecorator.cpp HoursDecorator.h main.cpp)

add_executable(QuestionCode ${SOURCE_FILES})