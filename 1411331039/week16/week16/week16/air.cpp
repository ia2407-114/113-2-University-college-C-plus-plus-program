#include "air.h"

// flight_object
flight_object::flight_object() {
    cout << "執行父類別 flight_object 的建構元\n";
    cout << "名稱: "; cin >> name;
    cout << "編號: "; cin >> id;
    cout << "駕駛員人數: "; cin >> pilot;
    cout << "煤油量(公升): "; cin >> kerosene;
}

flight_object::~flight_object() {
    cout << "執行父類別 flight_object 的解構元\n";
}

void flight_object::display() {
    cout << "\n[飛行物資料]\n";
    cout << "名稱: " << name << "\n編號: " << id
        << "\n駕駛員人數: " << pilot
        << "\n煤油量(公升): " << kerosene << endl;
}

// airliner
airliner::airliner() : flight_object() {
    cout << "\n執行子類別 airliner 的建構元\n";
    cout << "乘客人數: "; cin >> passenger;
    cout << "服務人員數: "; cin >> service_person;
}

airliner::~airliner() {
    cout << "執行子類別 airliner 的解構元\n";
}

void airliner::display_airliner() {
    cout << "[大型客機資料]\n";
    cout << "乘客人數: " << passenger
        << "\n服務人員數: " << service_person << endl;
}

// cargo
cargo::cargo() : flight_object() {
    cout << "\n執行子類別 cargo 的建構元\n";
    cout << "承租公司: "; cin >> company;
    cout << "最大乘載量(公斤): "; cin >> max_load;
}

cargo::~cargo() {
    cout << "執行子類別 cargo 的解構元\n";
}

void cargo::display_cargo() {
    cout << "[貨機資料]\n";
    cout << "承租公司: " << company
        << "\n最大乘載量(公斤): " << max_load << endl;
}
