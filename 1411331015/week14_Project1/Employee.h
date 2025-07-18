#pragma once
// Fig. 9.27: Employee.h
// Employee class definition with a static data member to 
// track the number of Employee objects in memory
#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
namespace std;
class Employee
{
public:
	Employee(const string&, const string&); // constructor
	~Employee(); // destructor
	string getFirstName() const; // return first name
	string getLastName() const; // return last name

	 // static member function
	static unsigned int getCount(); // return # of objects instantiated
private:
	string firstName;
	string lastName;

	// static data
	static unsigned int count; // number of objects instantiated
}; // end class Employee

#endif