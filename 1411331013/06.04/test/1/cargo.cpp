#include <iostream>
#include <string>
#include"cargo.h"
using namespace std;
// 飛行物體類別 

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

// flight_object類別解構元函式
flight_object::~flight_object()
{
    cout << "執行父類別flight_object的解構元函式.\n";
}

// 顯示飛行物的資料
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

// airliner類別解構元函式
airliner::~airliner()
{
    cout << "執行子類別airliner的解構元函式.\n";
}

// 顯示大型客機的資料
void airliner::display_airliner()
{
    cout << "乘客人數:" << passenger << endl;
    cout << "服務人員的數目:" << service_person << endl;
}

cargo::cargo()
{
    cout << "\n執行子類別cargo的建構元函式\n";
    cout << "貨運公司:";
    cin >> cargo_company;
    cout << "貨運最大數目:";
    cin >> max_cargo;
}

// cargo類別解構元函式
cargo::~cargo()
{
    cout << "執行子類別cargo的解構元函式.\n";
}

// 顯示貨運的資料
void cargo::display_cargo()
{
    cout << "貨運公司:" << cargo_company << endl;
    cout << "貨運最大數目:" << max_cargo << endl;
}