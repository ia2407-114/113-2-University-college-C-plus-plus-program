#include <string>
using namespace std;

class flight_object {
private:
    string name;      // 飛行物名稱
    int id;           // 飛行物編號
    int pilot;        // 駕駛員人數
    float kerosene;   // 煤油量(煤油是飛行物使用的燃料)

public:
    flight_object();          // 建構子
    ~flight_object();         // 解構子
    void display();           // 顯示飛行物的資料
};

class airliner : public flight_object {
private:
    int passenger;         // 乘客人數
    int service_person;    // 服務人員的數目

public:
    airliner();            // 建構子
    ~airliner();           // 解構子
    void display_airliner();  // 顯示大型客機的資料
};

class cargo : public flight_object {
private:
    int companyname;         // 乘客人數
    int max_drive;    // 服務人員的數目


public:
    cargo();            // 建構子
    ~cargo();           // 解構子
    void display_cargo();  // 顯示大型客機的資料
};