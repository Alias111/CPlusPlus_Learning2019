#pragma once

#include <string>
#include <iostream>

#define Log(x) std::cout << x << std::endl;

class Person {
private:
	std::string firstName;
	std::string lastName;
	int arbitraryNumber;

public:
	std::string getName();
};
