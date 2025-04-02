#include <iostream>
#include <string> 
#include "pet.h"
using namespace std;


pet::pet(string name, int age)//建立建構子
    : petname(name), petage(age)
{}
void pet:: setpetdata(string name, int age)
{
    if (age >= 0 and age < 20) {//判斷年齡是否合理
        petage = age;
    }
    else
    {
        cout << "年齡不合理!" << endl;
        cout << endl;
    }
}
string pet:: getpetName()//讀取姓名函式
{
    return petname;
}
int pet:: getpetage()//讀取年齡函式
{
    return petage;
}
void pet:: display()//印出姓名和年齡
{
    cout << "寵物姓名:" << petname << " 寵物年齡:" << petage << endl;
}
void pet:: namesize(string name)
{
    if (name.size() <= 10)
        petname = name;

    if (name.size() > 10)
    {
        petname = name.substr(0, 10);

        cerr << "寵物名稱: " << name << "，超過10個字元，"
            << "取用前10個字元。" << endl;
    }
}