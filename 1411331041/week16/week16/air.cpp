#include <iostream>
#include "air.h"
using namespace std;

// flight_object �غc��
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

// flight_object �Ѻc��
flight_object::~flight_object() {
    cout << "��������Oflight_object���Ѻc���禡.\n";
}

// flight_object ������
void flight_object::display() {
    cout << "\n���檫�W��:" << name << endl;
    cout << "�s��:" << id << endl;
    cout << "�r�p���H��:" << pilot << endl;
    cout << "�Ѫo�q(����):" << kerosene << endl;
}

// airliner �غc��
airliner::airliner() {
    cout << "\n����l���Oairliner���غc���禡\n";
    cout << "���ȤH��:";
    cin >> passenger;
    cout << "�A�ȤH�����ƥ�:";
    cin >> service_person;
}

// airliner �Ѻc��
airliner::~airliner() {
    cout << "����l���Oairliner���Ѻc���禡.\n";
}

// airliner ��ܸ��
void airliner::display_airliner() {
    cout << "���ȤH��:" << passenger << endl;
    cout << "�A�ȤH�����ƥ�:" << service_person << endl;
}

cargo::cargo() {
    cout << "\n��������Oflight_object���غc���禡\n";
    cout << "��@�@�[�f��:\n";
    cout << "�ӯ����q:";
    cin >> company;
    cout << "�̤j�Ӹ��q:";
    cin >> weight;
}

cargo::~cargo() {
    cout << "����l���Ocargo���Ѻc���禡.\n";
}

void cargo::display_cargo()
{
    cout << "\n�f��" << endl;
    cout << "�ӯ����q:" << company << endl;
    cout << "�̤j�Ӹ��q:" << weight << endl;
}

