#pragma once

#include <utility>

#include "Person.hpp"

class Tweeter:public Person {
private:
	std::string twitterHandle {};

public:
	Tweeter(
			std::string first,
			std::string last,
			int arbitrary, std::string  handle
			)
			:Person(std::move(first), std::move(last), arbitrary),
			twitterHandle(std::move(handle)) {

				std::string msg = "=> <<Constructing Tweet>> <= -> ";
				std::cout << msg << twitterHandle << std::endl;
	}
	// ! Deconstructor
	~Tweeter() {
		std::string msg = " => <<Destructing Tweet>> <= -> ";
		std::cout << msg << twitterHandle << std::endl;
	}
};


