// flight_object.cpp
#include "Header.h"

// flight_object ���O�غc��
flight_object::flight_object() {
    cout << "��������O flight_object ���غc���禡\n";
    cout << "��@�@�[���檫:\n";
    cout << "�W��: ";
    cin >> name;
    cout << "�s��: ";
    cin >> id;
    cout << "�r�p���H��: ";
    cin >> pilot;
    cout << "�Ѫo�q(����): ";
    cin >> kerosene;
}

// flight_object �Ѻc��
flight_object::~flight_object() {
    cout << "��������O flight_object ���Ѻc���禡.\n";
}

// flight_object ������
void flight_object::display() {
    cout << "\n���檫�W��: " << name << endl;
    cout << "�s��: " << id << endl;
    cout << "�r�p���H��: " << pilot << endl;
    cout << "�Ѫo�q(����): " << kerosene << endl;
}

// airliner ���O�غc��
airliner::airliner() {
    cout << "\n����l���O airliner ���غc���禡\n";
    cout << "���ȤH��: ";
    cin >> passenger;
    cout << "�A�ȤH�����ƥ�: ";
    cin >> service_person;
}

// airliner �Ѻc��
airliner::~airliner() {
    cout << "����l���O airliner ���Ѻc���禡.\n";
}

// airliner ������
void airliner::display_airliner() {
    cout << "���ȤH��: " << passenger << endl;
    cout << "�A�ȤH�����ƥ�: " << service_person << endl;
}
cargo::cargo() {
    cout << "\n����l���O cargo ���غc���禡\n";
    cout << "�п�J�ӯ����q: ";
    cin >> companyname;
    cout << "�п�J�̤j�Ӹ��q: ";
    cin >> maxpassenger;
}
cargo::~cargo() {
    cout << "����l���O cargo ���Ѻc���禡.\n";
}

void cargo::display_cargo() {
    cout << "�ӯ����q: " << companyname << endl;
    cout << "�̤j�Ӹ��q: " << maxpassenger << endl;
}
