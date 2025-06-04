#ifndef FLIGHT_OBJECT_H
#define FLIGHT_OBJECT_H

#include <iostream>
#include <string>
using namespace std;

// ���檫�����O 
class flight_object {
private:
    string name;
    int id;
    int pilot;
    float kerosene;

public:
    flight_object();  // �غc��
    virtual ~flight_object(); // �����Ѻc���]�H�Q���Ӧh���ϥΡ^
    void display();
};

// �j���Ⱦ����O
class airliner : public flight_object {
private:
    int passenger;
    int service_person;

public:
    airliner();  // �غc��
    ~airliner(); // �Ѻc��
    void display_airliner();
};
//cargo
class cargo : public flight_object {
private:
    string companyname;
    int maxpassenger;
public:
    cargo();  // �غc��
    ~cargo(); // �Ѻc��
    void display_cargo();
    
};
#endif