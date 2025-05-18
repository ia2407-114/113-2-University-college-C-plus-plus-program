#ifndef PET_H
#define PET_H
using namespace std;

#include <string>
#include "Date.h" // 引入日期類別定義

class Pet
{
public:
    Pet(const string&, const string&, const Date&, const Date&);
    Pet& setName(const string&, const string&);  // 返回當前對象以支持鏈式調用
    Pet& setBirthDate(int, int, int);  // 返回當前對象
    Pet& setAdoptDate(int, int, int);  // 返回當前對象
    void print() const;  // 顯示資料
    ~Pet(); // 解構子

private:
    string firstName; // 名字
    string lastName; // 姓氏
    Date birthDate; // 生日
    Date adoptDate; // 到職日
}; // end class Pet

#endif
