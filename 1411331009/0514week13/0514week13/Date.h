#ifndef DATE_H
#define DATE_H

class Date
{
public:
    static const unsigned int monthsPerYear = 12;  // 一年有 12 個月
    explicit Date(int = 1, int = 1, int = 1900);   // 預設建構子，年月日的預設值是 1/1/1900
    void print() const;                             // 打印日期，格式是 月/日/年
    ~Date();                                       // 解構子

private:
    unsigned int month; // 月
    unsigned int day;   // 日
    unsigned int year;  // 年

    unsigned int checkDay(int) const;  // 檢查日期是否有效
};

#endif