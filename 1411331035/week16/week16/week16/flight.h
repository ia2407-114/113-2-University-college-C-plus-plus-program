#ifndef FLIGHT_OBJECT_H
#define FLIGHT_OBJECT_H

#include <iostream>
#include <string>

using namespace std;

// 飛行物體類別
class flight_object {
private:
    string name; // 飛行物名稱
    int id;      // 飛行物編號
    int pilot;   // 駕駛員人數
    float kerosene; // 煤油量(煤油是飛行物使用的燃料)

public:
    // flight_object類別建構元函式,設定飛行物的資料
    flight_object();

    // flight_object類別解構元函式
    ~flight_object();

    // 顯示飛行物的資料
    void display();
};

// 大型客機類別
class airliner : public flight_object {
private:
    int passenger;      // 乘客人數
    int service_person; // 服務人員的數目

public:
    // airliner類別建構元函式,設定大型客機的資料
    airliner();

    // airliner類別解構元函式
    ~airliner();

    // 顯示大型客機的資料
    void display_airliner();
};

class cargo : public flight_object {
private:
    string comname;
    int maxpassenger;

public:
    cargo();

    ~cargo();

    void display_cargo();
};
#endif // FLIGHT_OBJECT_H

