#include "air.h"

// flight_object
flight_object::flight_object() {
    cout << "��������O flight_object ���غc��\n";
    cout << "�W��: "; cin >> name;
    cout << "�s��: "; cin >> id;
    cout << "�r�p���H��: "; cin >> pilot;
    cout << "�Ѫo�q(����): "; cin >> kerosene;
}

flight_object::~flight_object() {
    cout << "��������O flight_object ���Ѻc��\n";
}

void flight_object::display() {
    cout << "\n[���檫���]\n";
    cout << "�W��: " << name << "\n�s��: " << id
        << "\n�r�p���H��: " << pilot
        << "\n�Ѫo�q(����): " << kerosene << endl;
}

// airliner
airliner::airliner() : flight_object() {
    cout << "\n����l���O airliner ���غc��\n";
    cout << "���ȤH��: "; cin >> passenger;
    cout << "�A�ȤH����: "; cin >> service_person;
}

airliner::~airliner() {
    cout << "����l���O airliner ���Ѻc��\n";
}

void airliner::display_airliner() {
    cout << "[�j���Ⱦ����]\n";
    cout << "���ȤH��: " << passenger
        << "\n�A�ȤH����: " << service_person << endl;
}

// cargo
cargo::cargo() : flight_object() {
    cout << "\n����l���O cargo ���غc��\n";
    cout << "�ӯ����q: "; cin >> company;
    cout << "�̤j�����q(����): "; cin >> max_load;
}

cargo::~cargo() {
    cout << "����l���O cargo ���Ѻc��\n";
}

void cargo::display_cargo() {
    cout << "[�f�����]\n";
    cout << "�ӯ����q: " << company
        << "\n�̤j�����q(����): " << max_load << endl;
}
