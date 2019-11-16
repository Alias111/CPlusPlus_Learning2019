#include <iostream>
#include <utility>

using namespace std;

#define Log(x) cout << x << endl;

class Student {
public:
	string name, major;
	double gpa;

	// Default constructor
	Student() = default;

	Student(string aName, string aMajor, double aGpa) {
		/* The standard C++ library gained a function template called std::move,
		 * which, despite its name, does not move anything. std::move
		 * merely casts its argument to an rvalue reference to allow moving it, but doesnt’
		 * t guarantee a move operation. Move semantics is a way to avoid expensive deep
		 * copy operations and replace them with cheaper move operations. Essentially,
		 * you can think of it as turning a deep copy into a shallow copy. */
		name = std::move(aName);
		major = std::move(aMajor);
		gpa = aGpa;
	}

	bool hasHonors() {
		if ( gpa >= 3.5 ){
			Log("Has Honors...")
		} else if ( gpa < 3.5 ) {
			Log("Needs to work harder!")
		}
		return false;
	}

	string toStr() {
		Log("************ Student Info ******************\n")
		string str = "Student Name: [ " + name + " ]" +
		             "\nStudent Major: [ " + major + " ]" +
		             "\nStudent GPA: [ " + to_string(gpa) + " ]";
		Log(str)
		Log("\n************ Student Info ******************\n")
		return str;
	}
};