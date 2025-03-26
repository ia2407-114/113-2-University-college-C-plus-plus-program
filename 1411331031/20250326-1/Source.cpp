#include <iostream>
#include <string> 
using namespace std;

//建立類別
class pet
{
public:
    explicit pet(string name,int age)//建立建構子
        : petname(name),petage(age)
    {}

    //set函式
    void setpetdata(string name,int age)
    {
        if (age>=0 and age<20) {//判斷年齡是否合理
            petage = age;
        }
        else
        {
            cout << "年齡不合理!" << endl;
            cout << endl;
        }
    } 

    string getpetName()//讀取姓名函式
    {
        return petname;
    }
    int getpetage()//讀取年齡函式
    {
        return petage;
    }
    void display()//印出姓名和年齡
    {
        cout << "寵物姓名:" << petname << " 寵物年齡:" << petage << endl;
    }
private:
    string petname; //私有資料petname
    int petage;//私有資料petage
};

int main()
{
    string nameOfpet;int age;

    pet pet1("petname",10);//建立物件並給予初始資料

    cout << "原始資料為:"<< endl;
    pet1.display();

    cout << "\n請輸入寵物姓名:" << endl;
    getline(cin, nameOfpet);

    cout << "\n請輸入寵物年齡:" << endl;
    cin >> age;
    cout << endl;

    pet1.setpetdata(nameOfpet,age); 

    pet1.display();
} 