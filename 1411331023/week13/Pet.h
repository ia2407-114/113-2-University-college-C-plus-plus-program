#pragma once
#ifndef PET_H
#define PET_H

#include <string>
#include "Date.h"

class Pet {
public:
	Pet(const std::string&, const std::string&, const Date&, const Date&);
	void print() const;
	Pet& printFirstName();
	Pet& printLastName();
	Pet& printDates();
	~Pet();
private:
	std::string firstName;
	std::string lastName;
	const Date birthDate;
	const Date adoptDate;
};

#endif
