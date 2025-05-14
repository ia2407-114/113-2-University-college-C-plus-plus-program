#pragma once
#ifndef PET_H
#define PET_H

#include <string>
#include "Date.h" // �ޤJ Date ���O

class Pet
{
public:
    // �غc�l�A��l���d���������B�W�r�B�ͤ�B��i��
    Pet(const std::string& first, const std::string& last,
        const Date& dateOfBirth, const Date& dateOfTake);

    // �r������ơA��X�d�����
    void print() const;

    // �Ѻc�l�A��ܾP���T��
    ~Pet();

private:
    std::string classes; // �d��������
    std::string Name;    // �d�����W�r
    const Date birthDate; // �d�����ͤ�
    const Date takeDate;  // �d������i��
};

#endif