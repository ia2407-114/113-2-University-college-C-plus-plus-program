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