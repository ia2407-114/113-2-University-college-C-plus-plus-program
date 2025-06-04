#ifndef AIR_H
#define AIR_H

#include <string>
using namespace std;

// ���檫�����O 
class flight_object
{
private:
    string name;          // ���檫�W��
    int id;               // ���檫�s��
    int pilot;            // �r�p���H��
    float kerosene;       // �Ѫo�q(����)

public:
    flight_object();      // �غc��
    ~flight_object();     // �Ѻc��
    void display();       // ��ܸ��
};

// �j���Ⱦ����O
class airliner : public flight_object
{
private:
    int passenger;        // ���ȤH��
    int service_person;   // �A�ȤH�����ƥ�

public:
    airliner();           // �غc��
    ~airliner();          // �Ѻc��
    void display_airliner(); // ��ܤj���Ⱦ������
};

// �f�����O
class cargo : public flight_object 
{
private:
    string cargo_company; // �ӯ����q
    int max_cargo;        // �̤j�����q

public:
    cargo();              // �غc��
    ~cargo();             // �Ѻc��
    void display_cargo(); // ��ܳf�����
};

#endif // AIR_H
