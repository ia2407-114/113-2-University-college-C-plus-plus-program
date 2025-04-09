
#ifndef DATE_H
#define DATE_H

// ��H���O�G����
class Date {
public:
    virtual void setDate(int, int, int) = 0;
    virtual int getYear() const = 0;
    virtual int getMonth() const = 0;
    virtual int getDay() const = 0;
    virtual void printGregorian() const = 0;
    virtual void printROC() const = 0;
    virtual ~Date() {} // �����Ѻc�禡
};

// ��@���O
class DateImpl : public Date {
public:
    explicit DateImpl(int = 1990, int = 1, int = 1); // �w�]�Ȭ�1990/1/1
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