#include "flight.h"
#include <iostream>
#include <string>

using namespace std;

// flight_object���O�غc���禡,�]�w���檫�����
flight_object::flight_object() {
    cout << "��������Oflight_object���غc���禡\n";
    cout << "��@�@�[���檫:\n";
    cout << "�W��:";
    cin >> name;
    cout << "�s��:";
    cin >> id;
    cout << "�r�p���H��:";
    cin >> pilot;
    cout << "�Ѫo�q(����):";
    cin >> kerosene;
}

// flight_object���O�Ѻc���禡
flight_object::~flight_object() {
    cout << "��������Oflight_object���Ѻc���禡.\n";
}

// ��ܭ��檫�����
void flight_object::display() {
    cout << "\n���檫�W��:" << name << endl;
    cout << "�s��:" << id << endl;
    cout << "�r�p���H��:" << pilot << endl;
    cout << "�Ѫo�q(����):" << kerosene << endl;
}

// airliner���O�غc���禡,�]�w�j���Ⱦ������
airliner::airliner() {
    cout << "\n����l���Oairliner���غc���禡\n";
    cout << "���ȤH��:";
    cin >> passenger;
    cout << "�A�ȤH�����ƥ�:";
    cin >> service_person;
}

// airliner���O�Ѻc���禡
airliner::~airliner() {
    cout << "����l���Oairliner���Ѻc���禡.\n";
}

// ��ܤj���Ⱦ������
void airliner::display_airliner() {
    cout << "���ȤH��:" << passenger << endl;
    cout << "�A�ȤH�����ƥ�:" << service_person << endl;
}

cargo::cargo() {
    cout << "\n�п�J���q�W��:";
    cin >> comname;
    cout << "�п�J�̤j�Ӹ��q:";
    cin >> maxpassenger;
}
void cargo::display_cargo() {
    cout << "\n���q�W��:" << comname << endl;
    cout << "�̤j�Ӹ��q:" << maxpassenger << endl;

}
cargo::~cargo() {
    cout << "����l���Ocargo���Ѻc���禡.\n";
}