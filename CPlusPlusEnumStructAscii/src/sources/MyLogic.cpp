#include <iostream>
#include "../headers_H/MyLogic.h"

enum Animal { dog, cat, deer, sloth, pig };

enum Groceries {
	// ! Enums are not capitalized in C++
	// ! Capitalisation is reserved for 'macros' #define what EVA!
	chicken,
	eggs,
	milk
};

void GroceryPrinter(Groceries g) {
	switch (g) {
		case chicken:
			Log("You have chicken...")
			break;
		case eggs:
			Log("You have eggs...")
			break;
		case milk:
			Log("You have milk..")
		default:
			Log("GUESS YOUR GONNA STARVE!HAHAHA..")
	}
}
