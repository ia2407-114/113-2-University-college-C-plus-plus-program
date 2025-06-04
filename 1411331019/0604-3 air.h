#ifndef FLIGHT_OBJECT_H
#define FLIGHT_OBJECT_H

#include <iostream>
#include <string>
using namespace std;

class flight_object {
private:
    string name;
    int id;
    int pilot;
    float kerosene;

public:
    flight_object();
    virtual ~flight_object();
    void display();
};

class airliner : public flight_object {
private:
    int passenger;
    int service_person;

public:
    airliner();
    ~airliner();
    void display_airliner();
};

class cargo : public flight_object {
private:
    string rental_company;
    float max_capacity;

public:
    cargo();
    ~cargo();
    void display_cargo();
};

#endif // FLIGHT_OBJECT_H
