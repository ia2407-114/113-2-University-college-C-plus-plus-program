#include <iostream>
#include <string>
#include "Header.h"
using namespace std;

    // flight_object類別建構元函式,設定飛行物的資料
flight_object::flight_object()
{
    cout << "實作一架飛行物:\n";
    cout << "名稱:";
    cin >> name;
    cout << "製造者:";
    cin >> manufacturer;
    cout << "編號:";
    cin >> id;
    cout << "駕駛員人數:";
    cin >> pilot;
    cout << "煤油量(公升):";
    cin >> kerosene;
}

    // 顯示飛行物的資料
void flight_object::display()
{
    cout << "\n飛行物名稱:" << name << endl;
    cout << "製造者:" << manufacturer << endl;
    cout << "編號:" << id << endl;
    cout << "駕駛員人數:" << pilot << endl;
    cout << "煤油量(公升):" << kerosene << endl;
}


// 大型客機類別
    // airliner類別建構元函式,設定大型客機的資料 
airliner::airliner()
{
    cout << "乘客人數:";
    cin >> passenger;
    cout << "服務人員的數目:";
    cin >> service_person;
}

// 顯示大型客機的資料
void airliner::display()
{
    cout << "乘客人數:" << passenger << endl;
    cout << "服務人員的數目:" << service_person << endl;
}

// airbus類別建構元函式,設定空中巴士客機的資料 
airbus::airbus()
{
    cout << "沐浴室之數目:";
    cin >> bath_room;
}

// 顯示空中巴士客機的資料
void airbus::display()
{
    cout << "沐浴室之數目:" << bath_room << endl;
}

