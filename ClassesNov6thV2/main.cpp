#include "Person.hpp"
#include <iostream>
using std::cout;
using std::endl;
using std::string;

int main ()
{
	string const msg = "[ AFTER INNER MOST BLOCK ]";

	Person p1("Alias111", "The-Great-One", 37);
	{ Person p2; }

	string name = p1.getName();

	std::cin.get();
}
