#pragma once
#ifndef PET_H
#define PET_H

#include <string>
#include "Date.h" // 引入 Date 類別

class Pet
{
public:
    // 建構子，初始化寵物的種類、名字、生日、領養日
    Pet(const std::string& first, const std::string& last,
        const Date& dateOfBirth, const Date& dateOfTake);

    // 瀑布式函數，輸出寵物資料
    void print() const;

    // 解構子，顯示銷毀訊息
    ~Pet();

private:
    std::string classes; // 寵物的種類
    std::string Name;    // 寵物的名字
    const Date birthDate; // 寵物的生日
    const Date takeDate;  // 寵物的領養日
};

#endif