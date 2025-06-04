// flight_object.cpp
#include "Header.h"

// flight_object 類別建構元
flight_object::flight_object() {
    cout << "執行父類別 flight_object 的建構元函式\n";
    cout << "實作一架飛行物:\n";
    cout << "名稱: ";
    cin >> name;
    cout << "編號: ";
    cin >> id;
    cout << "駕駛員人數: ";
    cin >> pilot;
    cout << "煤油量(公升): ";
    cin >> kerosene;
}

// flight_object 解構元
flight_object::~flight_object() {
    cout << "執行父類別 flight_object 的解構元函式.\n";
}

// flight_object 資料顯示
void flight_object::display() {
    cout << "\n飛行物名稱: " << name << endl;
    cout << "編號: " << id << endl;
    cout << "駕駛員人數: " << pilot << endl;
    cout << "煤油量(公升): " << kerosene << endl;
}

// airliner 類別建構元
airliner::airliner() {
    cout << "\n執行子類別 airliner 的建構元函式\n";
    cout << "乘客人數: ";
    cin >> passenger;
    cout << "服務人員的數目: ";
    cin >> service_person;
}

// airliner 解構元
airliner::~airliner() {
    cout << "執行子類別 airliner 的解構元函式.\n";
}

// airliner 資料顯示
void airliner::display_airliner() {
    cout << "乘客人數: " << passenger << endl;
    cout << "服務人員的數目: " << service_person << endl;
}
cargo::cargo() {
    cout << "\n執行子類別 cargo 的建構元函式\n";
    cout << "請輸入承租公司: ";
    cin >> companyname;
    cout << "請輸入最大承載量: ";
    cin >> maxpassenger;
}
cargo::~cargo() {
    cout << "執行子類別 cargo 的解構元函式.\n";
}

void cargo::display_cargo() {
    cout << "承租公司: " << companyname << endl;
    cout << "最大承載量: " << maxpassenger << endl;
}
