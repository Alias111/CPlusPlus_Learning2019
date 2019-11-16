#include <iostream>
#include "Human.h"

#define Log(x) std::cout << x << std::endl;

// * Creates a instance
Human::Human() {
	Log("Hola! Im CTOR( Constructor )")
}
// ? Overloaded the constructor
Human::Human(int num) {
	Log("Hola! Im CTOR-OVERLOADED ( Constructor )")
}
// ! Copy Constructor( cctor ) member method
Human::Human(const Human &humanAddress) {
	Log("I copy everybody! CCTOr ( Copy Constructor )")
}
// ? Destructor
Human::~Human() {
	Log("HEY! Im here To Destroy!!! DTOR ( Destructor )")
}

bool Human::walk() {
	Log("")
	return false;
}









