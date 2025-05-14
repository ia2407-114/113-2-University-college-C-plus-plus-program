#ifndef DATE_H
#define DATE_H

class Date
{
public:
    static const unsigned int monthsPerYear = 12;  // �@�~�� 12 �Ӥ�
    explicit Date(int = 1, int = 1, int = 1900);   // �w�]�غc�l�A�~��骺�w�]�ȬO 1/1/1900
    void print() const;                             // ���L����A�榡�O ��/��/�~
    ~Date();                                       // �Ѻc�l

private:
    unsigned int month; // ��
    unsigned int day;   // ��
    unsigned int year;  // �~

    unsigned int checkDay(int) const;  // �ˬd����O�_����
};

#endif