#include <iostream>
#include "shape.h"
using namespace std;

int main()
{
    cout << "=== 建立長方形 square_2D ===\n";
    square_2D rect2D;
    rect2D.print_2D();

    cout << "\n=== 建立長方體 rect_3D ===\n";
    rect_3D rect3D;
    rect3D.print_3D();

    return 0;
}
