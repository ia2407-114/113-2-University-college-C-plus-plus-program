#include <iostream>
using namespace std;

//建立GradeBook物件
class GradeBook
{

public:
    //輸入函式
    void changeid()
    {
        cout << "請輸入要更改的ID:" << endl;
        cin >> myid;
    }
    //輸出函式
    void printid()
    {
        cout << "目前ID:" << myid << endl;
    }

private:
    int myid = 10;//私有ID
};

int main()
{
    GradeBook myGradeBook; //建立一個GradeBook物件名稱為myGradeBook
    myGradeBook.printid();
    myGradeBook.changeid();
    myGradeBook.printid();
}