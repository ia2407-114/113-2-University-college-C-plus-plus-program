#include "air.h"
using namespace std;

flight_object::flight_object()
{
    cout << "\n輸入飛行器基本資料：\n";
    cout << "飛行物名稱："; cin >> name;
    cout << "飛行物編號："; cin >> id;
    cout << "駕駛員人數："; cin >> pilot;
    cout << "煤油量(公升)："; cin >> kerosene;
}

flight_object::~flight_object()
{
    cout << "執行 flight_object 解構元\n";
}

void flight_object::display()
{
    cout << "名稱: " << name << endl;
    cout << "編號: " << id << endl;
    cout << "駕駛員人數: " << pilot << endl;
    cout << "煤油量: " << kerosene << " 公升" << endl;
}


airliner::airliner()
{
    cout << "\n輸入大型客機專屬資料：\n";
    cout << "乘客人數: "; cin >> passenger;
    cout << "服務人員數目: "; cin >> service_person;
}

airliner::~airliner()
{
    cout << "執行 airliner 解構元\n";
}

void airliner::display_airliner()
{
    cout << "乘客人數: " << passenger << endl;
    cout << "服務人員數目: " << service_person << endl;
}


cargo::cargo()
{
    cout << "\n輸入貨機專屬資料：\n";
    cout << "承租公司名稱: "; cin >> company;
    cout << "最大乘載量: "; cin >> max;
}

cargo::~cargo()
{
    cout << "執行 cargo 解構元\n";
}

void cargo::display_cargo()
{
    cout << "承租公司: " << company << endl;
    cout << "最大乘載量: " << max << endl;
}
