#include <iostream>
#include <string> 
using namespace std;

//�إ����O
class pet
{
public:
    explicit pet(string name,int age)//�إ߫غc�l
        : petname(name),petage(age)
    {}

    //set�禡
    void setpetdata(string name,int age)
    {
        if (age>=0 and age<20) {//�P�_�~�֬O�_�X�z
            petage = age;
        }
        else
        {
            cout << "�~�֤��X�z!" << endl;
            cout << endl;
        }
    } 

    string getpetName()//Ū���m�W�禡
    {
        return petname;
    }
    int getpetage()//Ū���~�֨禡
    {
        return petage;
    }
    void display()//�L�X�m�W�M�~��
    {
        cout << "�d���m�W:" << petname << " �d���~��:" << petage << endl;
    }
private:
    string petname; //�p�����petname
    int petage;//�p�����petage
};

int main()
{
    string nameOfpet;int age;

    pet pet1("petname",10);//�إߪ���õ�����l���

    cout << "��l��Ƭ�:"<< endl;
    pet1.display();

    cout << "\n�п�J�d���m�W:" << endl;
    getline(cin, nameOfpet);

    cout << "\n�п�J�d���~��:" << endl;
    cin >> age;
    cout << endl;

    pet1.setpetdata(nameOfpet,age); 

    pet1.display();
} 