#include <iostream>
#include <string> 
#include"pet.h"
using namespace std;


int main()
{
    string nameOfpet;int age;

    pet pet1("petname", 10);//建立物件並給予初始資料

    cout << "原始資料為:" << endl;
    pet1.display();

    cout << "\n請輸入寵物姓名:" << endl;
    getline(cin, nameOfpet);

    cout << "\n請輸入寵物年齡:" << endl;
    cin >> age;
    cout << endl;

    pet1.setpetdata(nameOfpet, age);

    pet1.display();
}
