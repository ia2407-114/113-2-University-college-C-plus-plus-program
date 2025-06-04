#ifndef AIR_H
#define AIR_H

#include <string>
using namespace std;

// 飛行物體類別 
class flight_object
{
private:
    string name;          // 飛行物名稱
    int id;               // 飛行物編號
    int pilot;            // 駕駛員人數
    float kerosene;       // 煤油量(公升)

public:
    flight_object();      // 建構元
    ~flight_object();     // 解構元
    void display();       // 顯示資料
};

// 大型客機類別
class airliner : public flight_object
{
private:
    int passenger;        // 乘客人數
    int service_person;   // 服務人員的數目

public:
    airliner();           // 建構元
    ~airliner();          // 解構元
    void display_airliner(); // 顯示大型客機的資料
};

// 貨機類別
class cargo : public flight_object 
{
private:
    string cargo_company; // 承租公司
    int max_cargo;        // 最大乘載量

public:
    cargo();              // 建構元
    ~cargo();             // 解構元
    void display_cargo(); // 顯示貨機資料
};

#endif // AIR_H
