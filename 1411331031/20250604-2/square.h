#include <iostream>
#include <string>
using namespace std;
// square2D類別 
class square2D
{
public:
    double l, w; // 飛行物名稱 
    // square2D類別建構元函式,設定square2D的資料          
    square2D();
    // square2D類別解構元函式
    ~square2D();
    // 顯示square2D的資料
    void display();
    void display_2D();
};

// rect3D類別(子類別)
//繼承square2D的public父親類別
class rect3D :public square2D
{
private:
    double h;  // 高度    
public:
    // rect3D類別建構元函式,設定rect3D的資料  
    rect3D();
    // rect3D類別解構元函式
    ~rect3D();
    // 顯示rect3D的資料
    void display_3D();
};