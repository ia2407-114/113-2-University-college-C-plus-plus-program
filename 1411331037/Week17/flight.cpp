#include <iostream>
#include <string>
#include "flight.h"

flight_object::flight_object()
{
    cout << "��@�@�[���檫:\n";
    cout << "�W��:";
    cin >> name;
    cout << "�s�y��:";
    cin >> manufacturer;
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
    cout << "�s�y��:" << manufacturer << endl;
    cout << "�s��:" << id << endl;
    cout << "�r�p���H��:" << pilot << endl;
    cout << "�Ѫo�q(����):" << kerosene << endl;
}

airliner::airliner()
{
    cout << "���ȤH��:";
    cin >> passenger;
    cout << "�A�ȤH�����ƥ�:";
    cin >> service_person;
}

void airliner::display()
{
    cout << "���ȤH��:" << passenger << endl;
    cout << "�A�ȤH�����ƥ�:" << service_person << endl;
}


airbus::airbus()
{
    cout << "�N�D�Ǥ��ƥ�:";
    cin >> bath_room;
}

void airbus::display()
{
    cout << "�N�D�Ǥ��ƥ�:" << bath_room << endl;
}