#include <iostream>
#include "MyFuncs.cpp"

int main()
{
	auto* w = new Whatever;
	w -> printAlias111();

	auto num = 16;
	w -> addOne(&num); // ! '&' @The address

	auto num2 = 12;
	w -> addTwo(num2);

	std::cin.get();
}