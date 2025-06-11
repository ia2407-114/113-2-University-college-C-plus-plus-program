#include <iostream>
#include "cylinder_3d.h"
using namespace std;

int main()
{
    cylinder_3d c;  // 創建圓柱體物件
    cout << "\n圓柱體資料:\n";
    c.display();  // 顯示圓柱體的資料，體積和表面積

    return 0;
}
