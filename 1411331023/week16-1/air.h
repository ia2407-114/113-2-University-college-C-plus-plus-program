#pragma once
#include <iostream>
#include <string>
using namespace std;

// 飛行物體類別 
class flight_object
{
protected:
    string name; // 飛行物名稱 
    int id;      // 飛行物編號 
    int pilot;   // 駕駛員人數 
    float kerosene; // 煤油量(煤油是飛行物使用的燃料) 

public:
    flight_object();
    ~flight_object();
    void display();
};

class airliner : public flight_object
{
private:
    int passenger;       // 乘客人數
    int service_person;  // 服務人員數目

public:
    airliner();
    ~airliner();
    void display_airliner();
};

class cargo : public flight_object
{
private:
    string company; // 承租公司
    int max;        // 最大乘載量

public:
    cargo();
    ~cargo();
    void display_cargo();
};
