#include "Cron_1D.h"
#include <cmath>

// Circ_1D 類別的建構子
Circ_1D::Circ_1D(double r) : radius(r) {
    cout << "Circ_1D 建構子呼叫" << endl;
}

// Circ_1D 類別的解構子
Circ_1D::~Circ_1D() {
    cout << "Circ_1D 解構子呼叫" << endl;
}

// 計算圓周長
double Circ_1D::compute_circ() {
    return 2 * PI * radius;
}

// Cron_1D 類別的建構子
Cron_1D::Cron_1D(double r, double h) : Circ_1D(r), height(h) {
    cout << "Cron_1D 建構子呼叫" << endl;
    volume = (1.0 / 3.0) * PI * radius * radius * height;  // 甜筒體積公式
}

// Cron_1D 類別的解構子
Cron_1D::~Cron_1D() {
    cout << "Cron_1D 解構子呼叫" << endl;
}

// 輸出甜筒的體積與底部圓周長
void Cron_1D::print() {
    cout << "甜筒體積: " << volume << endl;
    cout << "底部圓周長: " << compute_circ() << endl;
}
