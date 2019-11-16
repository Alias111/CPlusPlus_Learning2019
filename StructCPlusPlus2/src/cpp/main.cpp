#include <iomanip>
#include <cmath>
#include "../headers/helpers.h"

using std::cout;
using std::endl;
using std::cin;
using std::string;
using std::vector;
using std::fixed;
using std::showpoint;
using std::setprecision;

//#####################################################################
struct EmployeePay {
	string name;
	int empNum;
	double payRate;
	double hours;
	double grossPay;
};

void CalculatePay(EmployeePay employee) {
// Calculate pay for employee1
	cout << "Name: " << employee.name << endl;
	cout << "Employee Number: " << employee.empNum << endl;

	cout << "Enter the hours worked by this employee: ";
	UserInput(employee.hours);

	employee.grossPay = employee.hours * employee.payRate;
	cout << "Gross Pay: " << employee.grossPay << endl << endl;
}

//#####################################################################
int main()
{
	Log("------------------ Template -------------------[\n\n{ V-#1 }");
	//#################################################################
	puts("!!!Hello World!!!");
	  return EXIT_SUCCESS;

	EmployeePay employee1 = {
			"Alisia Martinez",
			1115,
			18.75
	};
	EmployeePay employee2 = {
			"Jill Scott",
			1321,
			19.05
	};

	Log("\n----------------------------------------------|\n\n{ V-#2 }");
	//##################################################################
	cout << fixed << showpoint << setprecision(2);

	//##################################################################
	Log("\n----------------------------------------------|\n\n{ V-#3 }");
	// Calculate pay for employee1
	CalculatePay(employee1);
	//##################################################################
	Log("\n----------------------------------------------|\n{ V-#4 }");
	

	//##################################################################
	Log("\n----------------------------------------------|\n{ V-#5 }");


	//##################################################################
	Log("\n----------------------------------------------|\n{ V-#6 }");



	//##################################################################
	Log("\n----------------------------------------------|\n{ V-#7 }");


	Log("\n------------------ Template -------------------[\n");

	End();
}
