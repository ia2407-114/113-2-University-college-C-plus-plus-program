#ifndef DATE_H
#define DATE_H

class Date
{
public:
    static const unsigned int monthsPerYear = 12; // 每年12個月
    explicit Date(int = 1, int = 1, int = 1900); // 預設建構子
    void setDate(int, int, int); // 設定日期
    void print() const; // 顯示日期
    ~Date(); // 解構子

private:
    unsigned int month; // 1-12 (一月到十二月)
    unsigned int day; // 1-31 根據月份
    unsigned int year; // 任意年份

    unsigned int checkDay(int) const; // 驗證日期的合法性
}; // end class Date

#endif
