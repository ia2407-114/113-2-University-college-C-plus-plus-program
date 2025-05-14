#include <iostream>
#include "Employee.h"
using namespace std;

int main() {
    string firstName, lastName;
    int bm, bd, by, hm, hd, hy;

    // 使用者輸入
    cout << "請輸入寵物姓："; getline(cin, lastName);
    cout << "請輸入寵物名："; getline(cin, firstName);

    cout << "請輸入生日 (月 日 年，以空格分隔)：";
    cin >> bm >> bd >> by;

    cout << "請輸入領養日期 (月 日 年，以空格分隔)：";
    cin >> hm >> hd >> hy;

    // 建立 Employee 物件並使用瀑布式方法設置屬性
    Employee emp(firstName, lastName, Date(bm, bd, by), Date(hm, hd, hy));
    emp.print();

    return 0;
}
