#ifndef AIR_H
#define AIR_H

#include <string>
using namespace std;

// ���檫�����O
class flight_object {
private:
    string name; // ���檫�W�� 
    int id;      // ���檫�s�� 
    int pilot;   // �r�p���H�� 
    float kerosene; // �Ѫo�q

public:
    flight_object();
    virtual ~flight_object();  // �O�o�[ virtual �䴩�h��
    void display();
};

// �j���Ⱦ����O
class airliner : public flight_object {
private:
    int passenger;        // ���ȤH��
    int service_person;   // �A�ȤH���H��

public:
    airliner();
    ~airliner();
    void display_airliner();
};

// �f�����O
class cargo : public flight_object {
private:
    string company;     // �ӯ����q
    float max_load;     // �̤j�����q�]����^

public:
    cargo();
    ~cargo();
    void display_cargo();
};

#endif
