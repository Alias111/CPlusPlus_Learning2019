#include "Person.hpp"
#include "Tweeter.hpp"
#include "Status.hpp"
#include <iostream>
using std::cout;
using std::endl;
using std::string;

int main ()
{
	Log("\n--------------------- Constructing/Destructing --------------------------")

	auto const msg = "*.) [=> AFTER INNER MOST BLOCK <=] ";
	auto const msg2 = " -> [=> GOT THE NAME <=] ";

	Person p1("Alias", "ONE11", 37);
	{ Person p2; }

	Log(msg)
	auto name = msg2 + p1.getName();

	Log("\n--------------------- Inheritance --------------------------")

	Person katie("[ Kate", "Matthews ]", 23);
	{
		Tweeter tweet(
				"[ Coding in C++ ]",
				"[ Else ]", 1,
				"[ @haters ]"
				);
		auto name2 = msg2 + tweet.getName();
	}

	Log(msg)
	auto name3 = msg2 + katie.getName();

	Log("\n--------------------- Enums --------------------------")

	Seasons now = winter;
	switch (now) {
		case summer:
			Log("Stay cool...")
			break;
		case spring:
			Log("Getting warmer...")
			break;
		case fall:
			Log("Start wearing a jacket...")
			break;
		case winter:
			Log("Stay warm...")
			break;
		default:
			Log("Your dead so its cold when your six feet deep!!!")
	}



	std::cin.get();
}
