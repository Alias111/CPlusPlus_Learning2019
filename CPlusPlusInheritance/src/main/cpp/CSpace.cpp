#include <iostream>
#include "CSpace.h"
#include "app.h"

void CSpace::Entity::Move(float xa, float ya) {
	X += xa;
	Y += ya;
}

void CSpace::Player::PrintName() {
	Log(Name)
}

std::string CSpace::Player::Concat(int num) {
	auto str = "Moved: ";
	auto Cat = str + num;
	Log(Cat)
}
