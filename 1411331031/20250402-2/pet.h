#include <iostream>
#include <string> 
using namespace std;

//�إ����O
class pet
{
public:
    explicit pet(string name, int age);//�إ߫غc�l

    //set�禡
    void setpetdata(string name, int age);
    

    string getpetName();//Ū���m�W�禡
    
    int getpetage();//Ū���~�֨禡
   
    void display();//�L�X�m�W�M�~��
    
private:
    string petname; //�p�����petname
    int petage;//�p�����petage
};
