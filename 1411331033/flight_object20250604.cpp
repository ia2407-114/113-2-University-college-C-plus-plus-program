#include <iostream>
#include <string>
#include "flight_object20250604.h"
using namespace std;

flight_object::flight_object()
{
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

void flight_object::display()
{
    cout << "\n���檫�W��:" << name << endl;
    cout << "�s��:" << id << endl;
    cout << "�r�p���H��:" << pilot << endl;
    cout << "�Ѫo�q(����):" << kerosene << endl;
}

flight_object::~flight_object()
{
    cout << "��������Oflight_object���Ѻc���禡.\n";
}

airliner::airliner()
{
    cout << "\n����l���Oairliner���غc���禡\n";
    cout << "���ȤH��:";
    cin >> passenger;
    cout << "�A�ȤH�����ƥ�:";
    cin >> service_person;
}

airliner::~airliner()
{
    cout << "����l���Oairliner���Ѻc���禡.\n";
}

void airliner::display_airliner()
{
    cout << "���ȤH��:" << passenger << endl;
    cout << "�A�ȤH�����ƥ�:" << service_person << endl;
}

cargo::cargo()
{
    cout << "\n����l���Ocargo���غc���禡\n";
    cout << "�ӯ����q:";
    cin >> Lessee;
    cout << "�̤j�����q:";
    cin >> Maximum_load;
}
cargo::~cargo()
{
    cout << "����l���Ocargo���Ѻc���禡.\n";
}
void cargo::display_cargo()
{
    cout << "���ȤH��:" << Lessee << endl;
    cout << "�A�ȤH�����ƥ�:" << Maximum_load << endl;
}