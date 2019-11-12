#include "../headers/helpers.h"
using std::cout;
using std::endl;
using std::cin;
using std::string;
using std::vector;

//#####################################################################
struct PayRoll {
	int empNum;
	string name;
	double hours;
	double payRate;
	double grossPay;
	
	friend void DisplayData();	
};


//#####################################################################

int main()
{
	Log("------------------ Struct -------------------[\n\n{ V-#1 }");
	//#################################################################
	// Creating an Payroll structure
	PayRoll employee;
	// Get the employee number.
	cout << "Enter the employee's number: ";
	UserInput(employee.empNum);
	
	Log("\n----------------------------------------------|\n\n{ V-#2 }");
	//##################################################################
	cout << "Enter the employee's name: ";
	cin.ignore();// To skip the remaining '\n' character
	/*  The getline() function extracts characters from the input stream and appends it to the string object until the delimiting character is encountered. */
	getline(cin, employee.name);

	//##################################################################
	Log("\n----------------------------------------------|\n\n{ V-#3 }");
	// Get the hours worked by the employee.
	cout << "What is the employee pay rate: ";
	UserInput(employee.payRate);
	
	//##################################################################
	Log("\n----------------------------------------------|\n{ V-#4 }");
	// Calculate the employee's gross pay.
	employee.grossPay = employee.hours * employee.payRate;
	
	//##################################################################
	Log("\n----------------------------------------------|\n{ V-#5 }");
	

	//##################################################################
	Log("\n----------------------------------------------|\n{ V-#6 }");
	
	

	//##################################################################
	Log("\n----------------------------------------------|\n{ V-#7 }");
	
	
	Log("\n------------------ Struct -------------------[\n");

	End();
}
