#include "../headers/helpers.h"
#include <fstream>
using std::cout;
using std::endl;
using std::cin;
using std::string;
using std::vector;

/*************************************************************
 * [ifstream]: It type represents the input file stream and it is
 * used to read the data from the files. [ofstream]: It represents
 * the output file stream and is used to create files and to
 * write data to files. [fstream]: It represents the file stream
 * and has the features of both the streams [ifstream] and of
 * stream which means it can create files, write the information
 * to file and read the information from files.
 *************************************************************/

int main() {
	Log("\n\n------------------ Pointer_Reference -------------------[\n\n{ V-#1 }");
	//#####################################################################
	// This program asks for the number of hours worked
	// by six employees. It stores the values in an array.
	const auto NUM_EMPLOYEES = 3;
	int hours[NUM_EMPLOYEES];

	// Get the hours worked by each employee.
	cout << "Enter the hours worked by "
	     << NUM_EMPLOYEES << " employees: ";
	cin >> hours[0];
	cin >> hours[1];
	cin >> hours[2];
	// Display the values in the array.
	cout << "The hours you entered are:\n";
	cout << " Hrs: " << hours[0];
	cout << " Hrs: " << hours[1];
	cout << " Hrs: " << hours[2];

	Log("\n----------------------------------------------|\n\n{ V-#2 }");
	//#####################################################################
	// This program asks for the number of hours worked by six
	// employees. It stores the values in an array. Using a for-loop.
	const auto NUM_EMPLOYEES2 = 3;
	int hoursLoop[NUM_EMPLOYEES2];
	int count;

	// Input the hours worked.
	for (count = 0; count < NUM_EMPLOYEES; count++) {
		cout << "Enter the hours worked by employee:\n"
		     << (count + 1) << ": ";// creates 1: NUM_EMPLOYEES
		cin >> hoursLoop[count];
	}

	// Display the contents of the array.
	cout << "The hours you entered are:";
	for (count = 0; count < NUM_EMPLOYEES; count++) {
		cout << " " << hours[count];
	}
	cout << endl;
	Log("\n----------------------------------------------|\n\n{ V-#3 }");
	//#####################################################################
	// This program displays the number of days in each month.
	const auto MONTHS = 12;
	int days[MONTHS] = {
			31, 28, 31, 30,
			31, 30, 31, 31,
			30,31,30, 31
	};

	for (auto num = 0; num < MONTHS; num++) {
		cout << "Month " << (num + 1) << " has ";
		cout << days[num] << " days.\n";
	}

	Log("\n----------------------------------------------|\n{ V-#4 }");
	//#####################################################################
	// shows an example with a string array
	// that is initialized with strings.
	const auto SIZE = 9;
	string planets[SIZE] = {
			"Mercury", "Venus", "Mars",
			"Jupiter", "Saturn", "Uranus",
			"Neptune","Pluto (A dwarf planet)"
	};
	// For the range-based for-loop to work it
	// must be constant & passed by reference.
	// The great thing about range-based for-loop
	// is that you dont have to pass the whole array
	// & its size declaration: planets[SIZE]. The
	// "planet" variable acts as container to all that.
	for (const auto& planet : planets) {
		cout << planet << endl;
	}

	Log("\n----------------------------------------------|\n{ V-#5 }");
	//#####################################################################
	// This program uses an array of ten characters to store the
	// first ten letters of the alphabet. The ASCII codes of the
	// characters are displayed.
	const auto NUM_LETTERS = 10;
	char letters[NUM_LETTERS] = {
			'A', 'B', 'C', 'D', 'E',
			'F', 'G', 'H', 'I', 'J'
	};

	cout << "Character" << "\t" << "ASCII Code\n";
	cout << "---------" << "\t" << "----------\n";

	for (const auto& letter : letters) {
		cout << letter << "\t\t\t";
		cout << static_cast<int>(letter) << endl;
	}

	Log("\n------------------ Pointer_Reference -------------------[\n");

	End();
}
