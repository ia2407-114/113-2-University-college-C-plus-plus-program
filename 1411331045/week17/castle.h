#include <iostream>
using namespace std;

// === 基礎類別：圓周長類 ===
class Circ_1D {
protected:
    double radius;       // 半徑
    const double pi = 3.1415;  // 圓周率，預設為 3.1415

public:
    Circ_1D() {  // 建構子，初始化圓的半徑
        cout << "請輸入圓的半徑: ";
        cin >> radius;
    }

    void compute_circ() {  // 計算圓周長
        double circumference = 2 * pi * radius;
        cout << "圓周長: " << circumference << endl;
    }
};

// === 圓錐體類別 ===
// 繼承自 Circ_1D，因此可使用 radius 與 pi
class Circ_3D : public Circ_1D {
protected:
    double height;  // 高度
    double volume;  // 體積

public:
    Circ_3D() : Circ_1D() {  // 呼叫基類建構子來初始化圓的半徑
        cout << "請輸入圓錐體的高度: ";
        cin >> height;  // 讓使用者輸入圓錐體的高度
    }

    void compute_volume() {  // 計算圓錐體的體積
        volume = (1.0 / 3) * pi * radius * radius * height;  // 圓錐體體積公式
        cout << "圓錐體的體積: " << volume << endl;
    }

    double getVolume() const {  // 公有方法，返回 volume
        return volume;
    }
};

// === 圓餅類別 ===
// 繼承自 Circ_1D，因此可使用 radius 與 pi
class Pie_2D : public Circ_1D {
protected:
    double area;  // 面積

public:
    Pie_2D() : Circ_1D() {  // 呼叫基類的建構子來初始化圓的半徑
    }

    void compute_area() {  // 計算圓餅的面積
        area = pi * radius * radius;
        cout << "圓餅的面積: " << area << endl;
    }
};

// === 圓柱體類別 ===
// 繼承自 Pie_2D，因此可使用 area、radius、pi
class Cylinder_3D : public Pie_2D {
protected:
    double height;  // 高度
    double volume;  // 體積
    double surface; // 表面積

public:
    Cylinder_3D() : Pie_2D() {  // 呼叫基類的建構子來初始化圓的半徑
        cout << "請輸入圓柱體的高度: ";
        cin >> height;  // 讓使用者輸入圓柱體的高度
    }

    void compute_volume() {  // 計算圓柱體的體積
        volume = pi * radius * radius * height;  // 圓柱體體積公式
        cout << "圓柱體的體積: " << volume << endl;
    }

    void compute_surface() {  // 計算圓柱體的表面積
        surface = 2 * pi * radius * (radius + height);  // 圓柱體表面積公式
        cout << "圓柱體的表面積: " << surface << endl;
    }

    double getVolume() const {  // 公有方法，返回 volume
        return volume;
    }
};

// === 城樓類別 ===
// 同時繼承 Cylinder_3D 和 Circ_3D
class Castle : public Cylinder_3D, public Circ_3D {
private:
    double height;  // 城樓的總高度
    double total_volume;  // 城樓的總體積

public:
    Castle() : Cylinder_3D(), Circ_3D() {  // 呼叫基類的建構子來初始化圓的半徑、圓錐體的高度和圓柱體的高度
        cout << "請輸入城樓的總高度: ";
        cin >> height;  // 輸入城樓總高度
    }

    void compute_volume() {  // 計算城樓的總體積
        total_volume = Circ_3D::getVolume() + Cylinder_3D::getVolume();  // 合併圓錐體體積與圓柱體體積
        cout << "城樓的總體積: " << total_volume << endl;
    }

    void compute_height() {  // 顯示城樓的總高度
        cout << "城樓的總高度: " << height << endl;
    }

    // 顯示所有計算結果
    void display() {
        Circ_3D::compute_circ();      // 計算圓的周長
        compute_volume();    // 計算圓錐體的體積（並計算城樓的總體積）
        compute_surface();   // 計算圓柱體的表面積
        cout << "甜筒的體積: " << Circ_3D::getVolume() << endl;  // 顯示圓錐體的體積
        compute_height();    // 顯示城樓的總高度
    }
};