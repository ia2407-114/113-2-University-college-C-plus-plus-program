#pragma once
#include <iostream>
using namespace std;

// 圓周長類別
class circ_1d {
protected:
    double radius;  // 圓的半徑
    const double pi = 3.14;  // 圓周率常數

public:
    circ_1d() {  // 建構子，初始化圓的半徑
        cout << "請輸入圓的半徑: ";
        cin >> radius;
    }

    // 計算圓的周長
    void compute_circ() {
        double circumference = 2 * pi * radius;  // 周長公式 2πr
        cout << "圓周長: " << circumference << endl;
    }
};

// 甜筒類別（圓錐體體積計算）
class cron_3d : public circ_1d {  // 甜筒類別繼承圓周長類別
private:
    double height;  // 甜筒的高度
    double volume;  // 甜筒的體積

public:
    cron_3d() : circ_1d() {  // 呼叫基類的建構子來初始化圓的半徑
        cout << "請輸入甜筒的高度: ";
        cin >> height;  // 讓使用者輸入甜筒的高度
    }

    // 計算甜筒的體積 (圓錐體的體積公式 1/3 * π * r^2 * h)
    void compute_volume() {
        volume = (1.0 / 3) * pi * radius * radius * height;  // 甜筒體積公式
        cout << "甜筒的體積: " << volume << endl;
    }
};

// 圓餅類別（圓面積計算）
class pie_2d : public circ_1d {  // 圓餅類別繼承圓周長類別
private:
    double area;  // 圓的面積

public:
    pie_2d() : circ_1d() {  // 呼叫基類的建構子來初始化圓的半徑
    }

    // 計算圓餅的面積 (圓面積公式 π * r^2)
    void compute_area() {
        area = pi * radius * radius;  // 面積公式
        cout << "圓餅的面積: " << area << endl;
    }
};

// 完整的甜筒類別，結合了圓周長、甜筒體積和圓餅面積
class cone : public cron_3d, public pie_2d {
public:
    cone() : cron_3d(), pie_2d() {  // 呼叫基類建構子來初始化圓的半徑和甜筒的高度
    }

    // 顯示圓周長、甜筒體積和圓餅面積
    void display() {
        cron_3d::compute_circ();  // 計算圓的周長
        compute_volume();  // 計算甜筒的體積
        compute_area();  // 計算圓餅的面積
    }
};
