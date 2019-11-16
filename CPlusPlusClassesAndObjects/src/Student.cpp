#include <iostream>
using namespace std;

#define Log(x) cout << x << endl;
class Student {

    public:
        string name, major;
        double gpa;

        Student(string aName, string aMajor, double aGpa) {
            name = aName;
            major = aMajor;
            gpa = aGpa;
        }

        bool hasHonors() {
	        if ( gpa >= 3.5 ){
                Log("Has Honors...")
            } else if ( gpa < 3.5 ) {
                Log("Needs to work harder!")
            }
            else return false;
        }

        string toStr() {
            Log("************ Student Info ******************\n");
            string str = "Student Name: [ " + name + " ]" +
                         "\nStudent Major: [ " + major + " ]" +
                         "\nStudent GPA: [ " + to_string(gpa) + " ]";
            Log(str);
            Log("\n************ Student Info ******************\n");
            return str;
        }
};