#include <iostream>
#include <string>
#include "Header.h"
using namespace std;

    // flight_object���O�غc���禡,�]�w���檫�����
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

    // ��ܭ��檫�����
void flight_object::display()
{
    cout << "\n���檫�W��:" << name << endl;
    cout << "�s�y��:" << manufacturer << endl;
    cout << "�s��:" << id << endl;
    cout << "�r�p���H��:" << pilot << endl;
    cout << "�Ѫo�q(����):" << kerosene << endl;
}


// �j���Ⱦ����O
    // airliner���O�غc���禡,�]�w�j���Ⱦ������ 
airliner::airliner()
{
    cout << "���ȤH��:";
    cin >> passenger;
    cout << "�A�ȤH�����ƥ�:";
    cin >> service_person;
}

// ��ܤj���Ⱦ������
void airliner::display()
{
    cout << "���ȤH��:" << passenger << endl;
    cout << "�A�ȤH�����ƥ�:" << service_person << endl;
}

// airbus���O�غc���禡,�]�w�Ť��ڤh�Ⱦ������ 
airbus::airbus()
{
    cout << "�N�D�Ǥ��ƥ�:";
    cin >> bath_room;
}

// ��ܪŤ��ڤh�Ⱦ������
void airbus::display()
{
    cout << "�N�D�Ǥ��ƥ�:" << bath_room << endl;
}

