#include <iostream>
#include <string>
#include "flight.h"

flight_object::flight_object()
{
    cout << "龟琜︽:\n";
    cout << "嘿:";
    cin >> name;
    cout << "籹硑:";
    cin >> manufacturer;
    cout << "絪腹:";
    cin >> id;
    cout << "緍緋计:";
    cin >> pilot;
    cout << "费猳秖(そど):";
    cin >> kerosene;
}

void flight_object::display()
{
    cout << "\n︽嘿:" << name << endl;
    cout << "籹硑:" << manufacturer << endl;
    cout << "絪腹:" << id << endl;
    cout << "緍緋计:" << pilot << endl;
    cout << "费猳秖(そど):" << kerosene << endl;
}

airliner::airliner()
{
    cout << "计:";
    cin >> passenger;
    cout << "狝叭计ヘ:";
    cin >> service_person;
}

void airliner::display()
{
    cout << "计:" << passenger << endl;
    cout << "狝叭计ヘ:" << service_person << endl;
}


airbus::airbus()
{
    cout << "∟疍ぇ计ヘ:";
    cin >> bath_room;
}

void airbus::display()
{
    cout << "∟疍ぇ计ヘ:" << bath_room << endl;
}