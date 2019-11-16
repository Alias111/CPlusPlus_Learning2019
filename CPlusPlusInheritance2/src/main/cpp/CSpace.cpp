#include <iostream>
#include "CSpace.h"
#include "app.h"

void CSpace::Entity::Move(float xa, float ya) {
	X += xa;
	Y += ya;
	std::cout << "\nX = "
			  // ! casting into a string
	          << "" << X
	          << "\nY = "
	          // ! casting into a string
	          << "" << Y
	          << std::endl;
}

void CSpace::Player::PrintName() {
	Log(Name)
}

void CSpace::Player::Gato(int num) {
	auto str = "Moved: ";
	std::cout << str
			  << "" << num
			  << std::endl;
}


