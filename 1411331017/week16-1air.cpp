#include <iostream>
#include <string>
#include "week16-1air.h"
using namespace std;

// ===== flight_object =====
flight_object::flight_object() {
    cout << "��������O flight_object ���غc��\n";
    cout << "��J���檫�W��: ";
    cin >> name;
    cout << "��J�s��: ";
    cin >> id;
    cout << "��J�r�p���H��: ";
    cin >> pilot;
    cout << "��J�Ѫo�q(����): ";
    cin >> kerosene;
}

flight_object::~flight_object() {
    cout << "��������O flight_object ���Ѻc��\n";
}

void flight_object::display() {
    cout << "\n[���澹���]\n";
    cout << "�W��: " << name << endl;
    cout << "�s��: " << id << endl;
    cout << "�r�p���H��: " << pilot << endl;
    cout << "�Ѫo�q(����): " << kerosene << endl;
}

// ===== airliner =====
airliner::airliner() {
    cout << "\n����l���O airliner ���غc��\n";
    cout << "��J���ȤH��: ";
    cin >> passenger;
    cout << "��J�A�ȤH���ƥ�: ";
    cin >> service_person;
}

airliner::~airliner() {
    cout << "����l���O airliner ���Ѻc��\n";
}

void airliner::display_airliner() {
    cout << "[�j���Ⱦ����]\n";
    cout << "���ȤH��: " << passenger << endl;
    cout << "�A�ȤH��: " << service_person << endl;
}

// ===== cargo =====
cargo::cargo() {
    cout << "\n����l���O cargo ���غc��\n";
    cout << "��J�ӯ����q�W��: ";
    cin >> company;
    cout << "��J�̤j�����q(����): ";
    cin >> max_load;
}

cargo::~cargo() {
    cout << "����l���O cargo ���Ѻc��\n";
}

void cargo::display_cargo() {
    cout << "[�f�����]\n";
    cout << "�ӯ����q: " << company << endl;
    cout << "�̤j�����q(����): " << max_load << endl;
}
