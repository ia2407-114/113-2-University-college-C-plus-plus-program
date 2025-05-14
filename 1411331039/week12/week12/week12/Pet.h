#ifndef Pet_H
#define Pet_H

#include <string>
#include "Date.h" // include Date class definition

class Pet
{
public:
    Pet(); // �w�]�غc�l
    ~Pet(); // �Ѻc�l�L�X�d�����

    // �䴩�r�����I�s�� setter�A�^�� *this
    Pet& setClass(const std::string&);
    Pet& setName(const std::string&);
    Pet& setBirthDate(const Date&);
    Pet& setTakeDate(const Date&);

    void print() const;

private:
    std::string classes;
    std::string Name;
    Date birthDate;
    Date takeDate;
}; // end class Pet

#endif
