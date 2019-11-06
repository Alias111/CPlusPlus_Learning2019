#pragma once

#include <string>
#include <iostream>
#include <utility>

#define Log(x) std::cout << x << std::endl;

class Person {
private:
	std::string firstName;
	std::string lastName;
	int arbitraryNumber;

public:
// ! the 'string&' is so that the value of the const at the address
// ! that instance of class Person is created. So the values
// ! to first name & last name cannot be changed once instantiated.
	Person(std::string first, std::string last, int arbitrary)
			: firstName(std::move(first)), lastName(std::move(last)), arbitraryNumber(arbitrary) {

		std::string const msg = "\n*.) => <<OVERLOADED CONSTRUCTOR CREATING>> <=\nOBJ INSTANCE: ";
		std::cout << msg << "[" << getName() << "]" << std::endl;
	}

	Person() : arbitraryNumber(0) {

		std::string msg = "\n*.) => <<CONSTRUCTING FROM DEFAULT CONSTRUCTOR>> <=";
		std::cout << msg << firstName << lastName << std::endl;
	}

	~Person() {
		std::string space = " ";
		std::string msg = "\n*.) => <<DECONSTRUCTING & DESTROYING ERRYTHING!>> <=\n";

		std::cout << msg << firstName << space << lastName;
		Log(" -> => <<Returned OBJECT INSTANCED DESTROYED>> <=\n\n")
	}

	std::string getName() {
		std::string space = " ";
		return firstName + space + lastName;
	}
};