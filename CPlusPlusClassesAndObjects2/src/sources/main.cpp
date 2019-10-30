#include <iostream>
#include "Student.cpp"

int main()
{
	Student s1("Alias111", "Java Eng", 5.0);
	Log(s1.hasHonors())
	s1.toStr();

	Log("#############################################\n")

	// Member access operators allow you to
	// get/set class members from a pointer
	Student s2;
	Student* s2p = &s2;

	s2p -> name = "Alisia";
	s2p -> major = "C++ Eng";
	s2p -> gpa = 3.2;
	Log(s2p -> hasHonors())
	s2p -> hasHonors();
	s2p -> toStr();


}