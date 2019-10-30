#include <iostream>
using std::string;

#define getSome(x) std::cout << x;

class Whatever {
public:
	static void printAlias111() {
		string msg = "\n\n1.) [ Testing this function out ]";
		getSome(msg)
	}

	// * Taking in a pointer to an 'int*'
	static void addOne(int *i) {
		// ? Using the '()' is how you will
		// * get the value at that address.
		// ! & increment by '1'
		(*i)++;
		// ! Switched the addressed by getting the pointer
		// ! to the very next value in the Array then dumping it.
		// ! Then we incremented the following address by 1
		auto inc = (*i)++;
		// ! Then implement the '++' afterwards
		// ! to increment the value inputted.
		std::cout << "\n2.) Incrementing By 1: -> [ "
		          << inc << " ]" << std::endl;
	}

	// * Making a reference to int j
	static void addTwo(int& j) {
			auto result = j += 2;
			getSome("3.) Adding Two: -> ")
			std::cout << "[ " << result << " ]" << std::endl;
	}


};




