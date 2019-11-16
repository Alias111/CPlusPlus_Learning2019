// Description: Illustrate the use of cin to get input.

#include <iostream>
using namespace std;

int main() {

	int inputVar = 0;

	do {
		cout << "Enter a number (-1 = quit)";
		if (!(cin >> inputVar)) {
			cout << "Please enter numbers only."
				 << endl;
			/*  cin.clear() helps in clearing the error flags
			 *  which are set when std::cin fails to interpret the input.
			 *  cin.ignore(10000,'\n') would mean either next 10000 characters
			 *  or the characters until '\n' shall be ignored, whichever
			 *  comes first. */
			cin.clear();
			cin.ignore(10000, '\n');

		} else if (inputVar != -1) {
			cout << "You entered " << inputVar << endl;
		}
	} while (inputVar != -1);

	cout << "Program Finished." << endl;

	return 0;
}