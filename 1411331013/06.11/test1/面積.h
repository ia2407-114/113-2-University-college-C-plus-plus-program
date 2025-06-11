#include <iostream>
#include <string>
using namespace std;
// 圓周長類別 
class Circ_1D
{
public:     
    double radius;       // 半徑
    double pi = 3.14;    // π
    // Circ_1D類別建構元函式,設定圓周長的資料
    Circ_1D();

    // 顯示飛行物的資料
    double print_1D();
    void compute_circ();
};

// 甜筒類別 
class Cron_3D :public Circ_1D
{
public:
    double height;
    double volume;// 甜筒體積

    // Cron_3D類別建構元函式,設定甜筒的資料
    Cron_3D();
    double print_3D();
    void compute_volume();
};

// 圓餅類別
class Pie_2D :public Circ_1D
{
private:
    double area;

public:
    // airliner類別建構元函式,設定大型客機的資料 
    Pie_2D();

    // 顯示大型客機的資料
    double print_2D();
    void comput_area();
};