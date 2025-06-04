#include <iostream>
#include "air.h"
using namespace std;

// 飛行物體類別建構元
flight_object::flight_object()
{
    // 如果不想顯示這段訊息，可以在這裡移除它：
    // cout << "執行父類別flight_object的建構元函式\n"; 
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

// 飛行物體類別解構元
flight_object::~flight_object()
{
    // 如果不想顯示這段訊息，可以在這裡移除它：
    // cout << "執行父類別flight_object的解構元函式.\n";
}

// 顯示飛行物資料
void flight_object::display()
{
    cout << "\n飛行物名稱:" << name << endl;
    cout << "編號:" << id << endl;
    cout << "駕駛員人數:" << pilot << endl;
    cout << "煤油量(公升):" << kerosene << endl;
}

// 大型客機類別建構元
airliner::airliner()
{
    cout << "\n執行子類別airliner的建構元函式\n";
    cout << "乘客人數:";
    cin >> passenger;
    cout << "服務人員的數目:";
    cin >> service_person;
}

// 大型客機類別解構元
airliner::~airliner()
{
    cout << "執行子類別airliner的解構元函式.\n";
}

// 顯示大型客機資料
void airliner::display_airliner()
{
    cout << "乘客人數:" << passenger << endl;
    cout << "服務人員的數目:" << service_person << endl;
}

// 貨機類別建構元
cargo::cargo()
{
    cout << "\n執行子類別cargo的建構元函式\n";
    cout << "承租公司名稱:";
    cin >> cargo_company;
    cout << "最大乘載量:";
    cin >> max_cargo; // 確保這裡讓使用者輸入最大乘載量
}

// 貨機類別解構元
cargo::~cargo()
{
    cout << "執行子類別cargo的解構元函式.\n";
}

// 顯示貨機資料
void cargo::display_cargo()
{
    cout << "承租公司名稱:" << cargo_company << endl;
    cout << "最大乘載量:" << max_cargo << endl;
}
