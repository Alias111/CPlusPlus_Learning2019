#include <iostream>
#include "app.h"
#include "CSpace.h"

using namespace CSpace;
//##########################################

int main ()
{
	auto player = new Player;

	player -> Gato(17);

	player -> Name = "Alias";
	player -> PrintName();

	player -> Move(2, 17);

	std::cin.get();
}
//##########################################
