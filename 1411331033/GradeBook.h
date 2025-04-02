#pragma once
#include <iostream>
#include <string> 
using namespace std;

class GradeBook
{
public:
    explicit  GradeBook(string name, int newage);
    void setCourseName(string name);
    void setage(int newage);
    string getCourseName() const;
    int getage() const;
    void displayMessage() const;
private:
    string courseName;
    int age = 1;
};