#include <iostream>
#include "Student.cpp"

int main()
{
	Student s1("Alias111", "Java Eng", 5.0);
	Log(s1.hasHonors())
	s1.toStr();

	Log("######################## Member Access Operators #####################\n")

	// Member access operators allow you to
	// get/set class members from a pointer
	/* Student s2;
	Student* s2p = &s2;

	s2p -> name = "Alisia";
	s2p -> major = "C++ Eng";
	s2p -> gpa = 3.2;
	Log(s2p -> hasHonors())
	s2p -> hasHonors();
	s2p -> toStr(); */
	// Casting Student instance
	auto* s2 = new Student();

	s2 -> name = "Alisia";
	s2 -> major = "C++ Eng";
	s2 -> gpa = 3.2;
	Log(s2 -> hasHonors())
	s2 -> hasHonors();
	s2 -> toStr();
}