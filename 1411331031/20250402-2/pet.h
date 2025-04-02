#include <iostream>
#include <string> 
using namespace std;

//建立類別
class pet
{
public:
    explicit pet(string name, int age);//建立建構子

    //set函式
    void setpetdata(string name, int age);
    

    string getpetName();//讀取姓名函式
    
    int getpetage();//讀取年齡函式
   
    void display();//印出姓名和年齡
    
private:
    string petname; //私有資料petname
    int petage;//私有資料petage
};
