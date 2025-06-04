#ifndef FLIGHT_OBJECT_H
#define FLIGHT_OBJECT_H

#include <iostream>
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
    flight_object();  // 建構元
    virtual ~flight_object(); // 虛擬解構元（以利未來多型使用）
    void display();
};

// 大型客機類別
class airliner : public flight_object {
private:
    int passenger;
    int service_person;

public:
    airliner();  // 建構元
    ~airliner(); // 解構元
    void display_airliner();
};
//cargo
class cargo : public flight_object {
private:
    string companyname;
    int maxpassenger;
public:
    cargo();  // 建構元
    ~cargo(); // 解構元
    void display_cargo();
    
};
#endif