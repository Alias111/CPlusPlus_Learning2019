#include <iostream>
#include "../header_H/Cat.h"

using namespace std;

void Cat::isHappy() { happy = true; }
void Cat::isSad() { happy = false; }

void Cat::speak() {
	if (happy) {
		cout << "Meooow...!!!" << endl;
	} else cout << "Sssssss" << endl;
}