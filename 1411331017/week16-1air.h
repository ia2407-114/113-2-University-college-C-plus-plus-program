#ifndef AIR_H
#define AIR_H

#include <string>
using namespace std;

// 飛行物體類別
class flight_object {
private:
    string name; // 飛行物名稱 
    int id;      // 飛行物編號 
    int pilot;   // 駕駛員人數 
    float kerosene; // 煤油量

public:
    flight_object();
    virtual ~flight_object();  // 記得加 virtual 支援多型
    void display();
};

// 大型客機類別
class airliner : public flight_object {
private:
    int passenger;        // 乘客人數
    int service_person;   // 服務人員人數

public:
    airliner();
    ~airliner();
    void display_airliner();
};

// 貨機類別
class cargo : public flight_object {
private:
    string company;     // 承租公司
    float max_load;     // 最大乘載量（公斤）

public:
    cargo();
    ~cargo();
    void display_cargo();
};

#endif
