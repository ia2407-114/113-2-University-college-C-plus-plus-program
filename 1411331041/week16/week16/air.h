#pragma once
#include <string>
using namespace std;

// 飛行物體類別
class flight_object {
private:
    string name;
    int id;
    int pilot;
    float kerosene;

public:
    flight_object();
    ~flight_object();
    void display();
};

// 大型客機類別 (繼承自 flight_object)
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
    string company;
    int weight;

public:
    cargo();
    ~cargo();
    void display_cargo();
};
