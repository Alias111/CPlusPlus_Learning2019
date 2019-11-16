#include <iostream>
#include "app.h"
#include "Human.h"

#define Log(x) std::cout << x << std::endl;

string testHuman() {
	string msg = "Im Gonna Get Destroyed";
	Human ImGonnaGet_Destroyed;
	return msg;
}

int main ()
{
	// ! Default constructor
	auto alias111= new Human;
	// Testing the public variable & method
	alias111 -> age = 37;
	alias111 -> walk();

	// ? Testing the human function
	testHuman();

	// * Overloaded constructor with a pointer
	auto* pHuman = new Human(17);
	Log(pHuman)
	delete pHuman;

	// Will exit with '0'
	// Destructor destroyed Everybody!!Hahaha
    std::cin.get();
}
