#ifndef CRON_1D_H   // 如果沒有定義 CRON_1D_H，就定義它，並執行以下內容
#define CRON_1D_H   // 定義 CRON_1D_H

#include <iostream>
using namespace std;

const double PI = 3.14;

class Circ_1D {
protected:
    double radius;
public:
    Circ_1D(double r);  // 建構子
    ~Circ_1D();         // 解構子
    double compute_circ();  // 計算圓周長
};

class Cron_1D : public Circ_1D {
protected:
    double height, volume;
public:
    Cron_1D(double r, double h);  // 建構子
    ~Cron_1D();                   // 解構子
    void print();                  // 輸出甜筒的體積與圓周長
};

#endif // CRON_1D_H   // 確保 #endif 跟 #ifndef 配對，這裡是結束保護區塊
