// Date.h
#ifndef DATE_H
#define DATE_H

#include <stdexcept>
#include <array>

class Date {
public:
    static const unsigned int monthsPerYear = 12;
    explicit Date(int month = 1, int day = 1, int year = 1900);

    // 列印 mm/dd/yyyy
    void print() const;

    // 計算以 this 為生日，至 onDate 的年齡（整年）
    int calculateAge(const Date& onDate) const;

    // 比較運算子：檢查 this 是否早於或等於 rhs
    bool operator<=(const Date& rhs) const;

    ~Date();

private:
    unsigned int month;
    unsigned int day;
    unsigned int year;

    unsigned int checkDay(int testDay) const;
};

#endif
