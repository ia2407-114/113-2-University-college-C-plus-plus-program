#include <iostream>
#include "air.h"
using namespace std;

// ���檫�����O�غc��
flight_object::flight_object()
{
    // �p�G���Q��ܳo�q�T���A�i�H�b�o�̲������G
    // cout << "��������Oflight_object���غc���禡\n"; 
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

// ���檫�����O�Ѻc��
flight_object::~flight_object()
{
    // �p�G���Q��ܳo�q�T���A�i�H�b�o�̲������G
    // cout << "��������Oflight_object���Ѻc���禡.\n";
}

// ��ܭ��檫���
void flight_object::display()
{
    cout << "\n���檫�W��:" << name << endl;
    cout << "�s��:" << id << endl;
    cout << "�r�p���H��:" << pilot << endl;
    cout << "�Ѫo�q(����):" << kerosene << endl;
}

// �j���Ⱦ����O�غc��
airliner::airliner()
{
    cout << "\n����l���Oairliner���غc���禡\n";
    cout << "���ȤH��:";
    cin >> passenger;
    cout << "�A�ȤH�����ƥ�:";
    cin >> service_person;
}

// �j���Ⱦ����O�Ѻc��
airliner::~airliner()
{
    cout << "����l���Oairliner���Ѻc���禡.\n";
}

// ��ܤj���Ⱦ����
void airliner::display_airliner()
{
    cout << "���ȤH��:" << passenger << endl;
    cout << "�A�ȤH�����ƥ�:" << service_person << endl;
}

// �f�����O�غc��
cargo::cargo()
{
    cout << "\n����l���Ocargo���غc���禡\n";
    cout << "�ӯ����q�W��:";
    cin >> cargo_company;
    cout << "�̤j�����q:";
    cin >> max_cargo; // �T�O�o�����ϥΪ̿�J�̤j�����q
}

// �f�����O�Ѻc��
cargo::~cargo()
{
    cout << "����l���Ocargo���Ѻc���禡.\n";
}

// ��ܳf�����
void cargo::display_cargo()
{
    cout << "�ӯ����q�W��:" << cargo_company << endl;
    cout << "�̤j�����q:" << max_cargo << endl;
}
