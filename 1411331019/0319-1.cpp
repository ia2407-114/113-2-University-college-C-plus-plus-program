#include <iostream>
using namespace std;

//�إ�GradeBook����
class GradeBook
{

public:
    //��J�禡
    void changeid()
    {
        cout << "�п�J�n��諸ID:" << endl;
        cin >> myid;
    }
    //��X�禡
    void printid()
    {
        cout << "�ثeID:" << myid << endl;
    }

private:
    int myid = 10;//�p��ID
};

int main()
{
    GradeBook myGradeBook; //�إߤ@��GradeBook����W�٬�myGradeBook
    myGradeBook.printid();
    myGradeBook.changeid();
    myGradeBook.printid();
}