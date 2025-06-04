#include <iostream>
using namespace std;

// 基本類別: square_2D (長方形)
class square_2D {
protected:
    float length;  // 長方形的長
    float width;   // 長方形的寬

public:
    // 建構子
    square_2D() {
        cout << "請輸入長方形的長: ";
        cin >> length;
        cout << "請輸入長方形的寬: ";
        cin >> width;
    }

    // 解構子
    ~square_2D() {
        cout << "銷毀長方形物件...\n";
    }

    // 輸出長方形的屬性與面積
    void print_2D() {
        float area = length * width;
        cout << "長方形長: " << length << ", 寬: " << width << ", 面積: " << area << endl;
    }
};

// 衍生類別: rect_3D (長方體，繼承自 square_2D)
class rect_3D : public square_2D {
private:
    float height;  // 長方體的高度

public:
    // 建構子
    rect_3D() : square_2D() {  // 先呼叫父類別的建構子
        cout << "請輸入長方體的高: ";
        cin >> height;
    }

    // 解構子
    ~rect_3D() {
        cout << "銷毀長方體物件...\n";
    }

    // 輸出長方體的屬性與體積
    void print_3D() {
        float volume = length * width * height;
        cout << "長方體長: " << length << ", 寬: " << width << ", 高: " << height << ", 體積: " << volume << endl;
    }
};

int main() {
    // 建立一個長方形物件
    square_2D square;
    square.print_2D();  // 輸出長方形的長、寬與面積

    // 建立一個長方體物件
    rect_3D rectangle;
    rectangle.print_2D();  // 輸出長方形的長、寬與面積（來自父類別）
    rectangle.print_3D();  // 輸出長方體的長、寬、高與體積

    return 0;
}
