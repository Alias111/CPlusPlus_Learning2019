#include "Person.hpp"
#include "Tweeter.hpp"
#include <iostream>
using std::cout;
using std::endl;
using std::string;

int main ()
{
	Log("\n--------------------- Constructing/Destructing --------------------------")

	string const msg = "*.) [=> AFTER INNER MOST BLOCK <=] ";
	string const msg2 = " -> [=> GOT THE NAME <=] ";

	Person p1("Alias", "ONE11", 37);
	{ Person p2; }

	Log(msg)
	string name = msg2 + p1.getName();

	Log("\n--------------------- Inheritance --------------------------")

	Person katie("[ Kate", "Matthews ]", 23);
	{
		Tweeter tweet(
				"[ Coding in C++ ]",
				"[ Else ]", 1,
				"[ @haters ]"
				);
		string name2 = msg2 + tweet.getName();
	}

	Log(msg)
	string name3 = msg2 + katie.getName();

	std::cin.get();
}
