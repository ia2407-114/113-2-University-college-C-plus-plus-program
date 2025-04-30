// Date.h
#ifndef DATE_H
#define DATE_H

#include <stdexcept>
#include <array>

class Date {
public:
    static const unsigned int monthsPerYear = 12;
    explicit Date(int month = 1, int day = 1, int year = 1900);

    // �C�L mm/dd/yyyy
    void print() const;

    // �p��H this ���ͤ�A�� onDate ���~�֡]��~�^
    int calculateAge(const Date& onDate) const;

    // ����B��l�G�ˬd this �O�_����ε��� rhs
    bool operator<=(const Date& rhs) const;

    ~Date();

private:
    unsigned int month;
    unsigned int day;
    unsigned int year;

    unsigned int checkDay(int testDay) const;
};

#endif
