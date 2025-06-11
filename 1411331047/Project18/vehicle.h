#ifndef VEHICLE_H
#define VEHICLE_H

#include <iostream>
#include <string>
using namespace std;

// ���檫�����O
class flight_object {
private:
    string name;
    int id;
    int pilot;
    float kerosene;

public:
    string manufacturer;

    flight_object();
    void display();
};

// ���W��檫�����O
class ship_object {
protected:
    string pump_jet;

public:
    ship_object();
};

// �j���Ⱦ����O
class airliner : public flight_object, protected ship_object {
private:
    int passenger;
    int service_person;

public:
    airliner();
    void display();
};

#endif
#pragma once
