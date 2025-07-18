#include <iostream>
#include <string>
using namespace std;
#include "air.h"

flight_object::flight_object()
{
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

flight_object::~flight_object()
{
    cout << "執行父類別flight_object的解構元函式.\n";
}

void flight_object::display()
{
    cout << "\n飛行物名稱:" << name << endl;
    cout << "編號:" << id << endl;
    cout << "駕駛員人數:" << pilot << endl;
    cout << "煤油量(公升):" << kerosene << endl;
}

airliner::airliner()
{
    cout << "\n執行子類別airliner的建構元函式\n";
    cout << "乘客人數:";
    cin >> passenger;
    cout << "服務人員的數目:";
    cin >> service_person;
}

airliner::~airliner()
{
    cout << "執行子類別airliner的解構元函式.\n";
}

void airliner::display_airliner()
{
    cout << "乘客人數:" << passenger << endl;
    cout << "服務人員的數目:" << service_person << endl;
}

cargo::cargo() {

    cout << "\n執行子類別 cargo 的建構元函式\n";
    cout << "承租公司:";
    cin >> cargo_company;
    cout << "最大載貨量:";
    cin >> max_cargo;
}

// cargo 類別解構子
cargo::~cargo() {
    cout << "執行子類別 cargo 的解構元函式.\n";
}

// 顯示貨機資料
void cargo::display_cargo() {
    cout << "承租公司: " << cargo_company << endl;
    cout << "最大載貨量: " << max_cargo << endl;
}