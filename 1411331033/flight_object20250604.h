#pragma once
#include <iostream>
#include <string>
using namespace std;

class flight_object
{
public:
              
    flight_object();
    ~flight_object();
    void display();

private:
    string name;
    int id;
    int pilot;
    float kerosene;
};

class airliner :public flight_object
{
public:
    airliner();
    ~airliner();
    void display_airliner();

private:
    int passenger;
    int service_person;
};

class cargo :public flight_object
{
public:
    cargo();
    ~cargo();
    void display_cargo();

private:
    int Lessee;
    int Maximum_load;
};