#include <string>
using namespace std;

class flight_object {
private:
    string name;      // ���檫�W��
    int id;           // ���檫�s��
    int pilot;        // �r�p���H��
    float kerosene;   // �Ѫo�q(�Ѫo�O���檫�ϥΪ��U��)

public:
    flight_object();          // �غc�l
    ~flight_object();         // �Ѻc�l
    void display();           // ��ܭ��檫�����
};

class airliner : public flight_object {
private:
    int passenger;         // ���ȤH��
    int service_person;    // �A�ȤH�����ƥ�

public:
    airliner();            // �غc�l
    ~airliner();           // �Ѻc�l
    void display_airliner();  // ��ܤj���Ⱦ������
};

class cargo : public flight_object {
private:
    int companyname;         // ���ȤH��
    int max_drive;    // �A�ȤH�����ƥ�


public:
    cargo();            // �غc�l
    ~cargo();           // �Ѻc�l
    void display_cargo();  // ��ܤj���Ⱦ������
};