#include <iostream>
#include <string>
using namespace std;
// 圓周長類別 
class Circ_1D
{
public:
    double radius;  // 半徑
    double pi = 3.14;//π
    double circ;
    // Circ_1D類別建構元函式,設定圓周長的資料
    Circ_1D();
    // 顯示圓周長的資料
    void compute_circ();
};

// 甜筒類別 
class Cron_3D :public virtual Circ_1D
{
public:
    double height,volume;  // 定義高、體積
    // Cron_3D類別建構元函式,設定甜筒的資料
    Cron_3D();
    void compute_volume();
};

// 圓餅類別
class Pie_2D :public virtual Circ_1D
{   
public:
    double area;  //定義圓面積 
    // Pie_2D類別建構元函式,設定圓面積的資料 
    Pie_2D();
    // 顯示圓面積的資料
    void compute_area();
};

//圓柱體類別
class Cylinder_3D :public virtual Circ_1D
{
public:
    double height, volume, surface;//定義高、體積、表面積
    // Cylinder_3D類別建構元函式,設定圓柱體的資料 
    Cylinder_3D();
    // 顯示圓柱體的資料
    void compute_volume();
    void compute_surface();
};

//城樓類別
class Castle :public virtual Cron_3D, public virtual Cylinder_3D
{
public:
    double height, volume;//定義高、體積
    // Castle類別建構元函式,設定城樓的資料 
    Castle();
    // 顯示圓柱體的資料
    void compute_volume();
};