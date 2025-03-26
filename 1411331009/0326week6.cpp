#include <iostream>
#include <string> // �ޤJ C++ �зǦr�����O
using namespace std;

// Dog ���O�w�q
class Dog
{
public:
    // �]�w�W�ٻP�~�֪��غc�l
    Dog(string name, int age)
    {
        setName(name); // �]�w�����W�r
        setAge(age);   // �]�w�����~��
    }

    // �]�w�����W�r
    void setName(string name)
    {
        if (!name.empty()) // �p�G�W�r���O�Ŧr��
            dogName = name;
        else
            cout << "�W�r����O�Ŧr��!" << endl;
    }

    // ���o�����W�r
    string getName() const
    {
        return dogName;
    }

    // �]�w�����~�֡A���ˬd�~�֬O�_�X�z
    void setAge(int age)
    {
        if (age > 0 && age <= 20) // ���]�~�֦b 1 �� 20 �������X�z
            dogAge = age;
        else
            cout << "�~�֤��X�z�A�п�J���� 1 �� 20 ���������~��!" << endl;
    }

    // ���o�����~��
    int getAge() const
    {
        return dogAge;
    }

    // �C�L������T
    void printDogInfo() const
    {
        cout << "�����W�r: " << dogName << endl;
        cout << "�����~��: " << dogAge << " ��" << endl;
    }

private:
    string dogName; // �����W�r
    int dogAge;     // �����~��
}; // ���� Dog ���O

// �D�{��
int main()
{
    string dogName;
    int dogAge;

    // �Ыؤ@�� Dog ����
    Dog myDog("Bobby", 5); // �w�]�����W�r�O Bobby�A�~�֬O 5

    // ��ܪ�l��������T
    cout << "��l������T:" << endl;
    myDog.printDogInfo();

    // ���ϥΪ̿�J�����W�r
    cout << "\n�п�J�����W�r:" << endl;
    getline(cin, dogName); // Ū���W�r�A���\�Ů�

    // ���ϥΪ̿�J�����~��
    cout << "�п�J�����~��:" << endl;
    cin >> dogAge;

    // �]�w�����W�r�P�~��
    myDog.setName(dogName);
    myDog.setAge(dogAge);

    // ��ܧ�s�᪺������T
    cout << endl;
    cout << "��s�᪺����T:" << endl;
    myDog.printDogInfo();

    return 0;
}