#ifndef Pet_H
#define Pet_H

#include <string>
#include "Date.h" // include Date class definition

class Pet
{
public:
    Pet(); // 預設建構子
    ~Pet(); // 解構子印出寵物資料

    // 支援瀑布式呼叫的 setter，回傳 *this
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
