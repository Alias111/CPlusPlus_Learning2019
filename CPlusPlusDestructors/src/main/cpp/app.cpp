#include <iostream>
#include "RipTire.cpp"


int main () {
	// ! By placing the Obj instance in
	// * curly braces the constructor &
	// ? destructor are activated and run
	// ! to create the obj & destroy the obj instance
	{ RipTire r; }

	string y;
	getline(std::cin, y);

    std::cin.get();
}
