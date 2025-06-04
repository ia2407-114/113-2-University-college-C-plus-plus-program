#include <iostream>
#include "air.h"
using namespace std;

// flight_object 建構元
flight_object::flight_object() {
    cout << "執行父類別flight_object的建構元函式\n";
    cout << "實作一架飛行物:\n";
    cout << "名稱:";
    cin >> name;
    cout << "編號:";
    cin >> id;
    cout << "駕駛員人數:";
    cin >> pilot;
    cout << "煤油量(公升):";
    cin >> kerosene;
}

// flight_object 解構元
flight_object::~flight_object() {
    cout << "執行父類別flight_object的解構元函式.\n";
}

// flight_object 資料顯示
void flight_object::display() {
    cout << "\n飛行物名稱:" << name << endl;
    cout << "編號:" << id << endl;
    cout << "駕駛員人數:" << pilot << endl;
    cout << "煤油量(公升):" << kerosene << endl;
}

// airliner 建構元
airliner::airliner() {
    cout << "\n執行子類別airliner的建構元函式\n";
    cout << "乘客人數:";
    cin >> passenger;
    cout << "服務人員的數目:";
    cin >> service_person;
}

// airliner 解構元
airliner::~airliner() {
    cout << "執行子類別airliner的解構元函式.\n";
}

// airliner 顯示資料
void airliner::display_airliner() {
    cout << "乘客人數:" << passenger << endl;
    cout << "服務人員的數目:" << service_person << endl;
}

cargo::cargo() {
    cout << "\n執行父類別flight_object的建構元函式\n";
    cout << "實作一架貨機:\n";
    cout << "承租公司:";
    cin >> company;
    cout << "最大承載量:";
    cin >> weight;
}

cargo::~cargo() {
    cout << "執行子類別cargo的解構元函式.\n";
}

void cargo::display_cargo()
{
    cout << "\n貨機" << endl;
    cout << "承租公司:" << company << endl;
    cout << "最大承載量:" << weight << endl;
}

