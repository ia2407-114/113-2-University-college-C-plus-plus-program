
#ifndef DATE_H
#define DATE_H

// 抽象類別：介面
class Date {
public:
    virtual void setDate(int, int, int) = 0;
    virtual int getYear() const = 0;
    virtual int getMonth() const = 0;
    virtual int getDay() const = 0;
    virtual void printGregorian() const = 0;
    virtual void printROC() const = 0;
    virtual ~Date() {} // 虛擬解構函式
};

// 實作類別
class DateImpl : public Date {
public:
    explicit DateImpl(int = 1990, int = 1, int = 1); // 預設值為1990/1/1
    void setDate(int, int, int) override;
    int getYear() const override;
    int getMonth() const override;
    int getDay() const override;
    void printGregorian() const override;
    void printROC() const override;

private:
    int year;
    int month;
    int day;
    bool isValidDate(int, int, int) const;
    bool isLeapYear(int) const;
};

#endif