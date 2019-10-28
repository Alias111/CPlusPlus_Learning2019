// Description: An illustration of file processing
#include <iostream>
#include <fstream>
using namespace std;
/* File processing in C++ is performed using fstream.
 * To save to a file, we declare an ofstream, and
 * open it using the "out" mode. Check this
 * out in the following example */


int main()
{
	// CamelCase variable declarations. Sorry to much java
	char firstName[30], lastName[30];
	int age;
	char fileName[20];
	char done;
	// Collects the file data

	cout << endl << "Enter the name of the file: ";
	cin >> fileName;

	/*  The scope resolution operator can be used to
	 *  define a function outside a class.
	 *  The scope resolution operator can be used to
	 *  access a global variable when there is also
	 *  a local variable with the same name */

	// ofstream Creates and writes to files
	// Create an ofstream called People, open the stream for output.
	ofstream People(fileName, ios::out);

	cout << endl << "Enter your data. " << endl;

	// Collect the data.
	while (true) {
		cout << "Enter First Name: ";
		cin >> firstName;

		cout << "Enter Last Name: ";
		cin >> lastName;

		cout << "Enter Age: ";
		cin >> age;

		// Write the output to the stream.
		People << firstName << endl
		       << lastName << endl
		       << age << endl;
		// Check if they wish to continue;
		cout << "Do You Want To Continue? y/n" << endl;
		cin >> done;
		if (done == 'n') break;
	}
	People.close();

	// Create an ifstream to read the file.
	ifstream People_in(fileName);

	while (true) {
		People_in >> firstName >> lastName >> age;
		// eof( ), returns a nonzero (meaning TRUE)
		// when there is no more data to be read
		// from an input file stream
		if (People_in.eof()) break;

		cout << endl << "First Name:" << firstName;
		cout << endl << "Last Name:" << lastName;
		cout << endl << "Age:" << age;
		cout << endl;
	}
	People_in.close();

	return 0;
}