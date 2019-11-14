#include "../Headers/headers.h"
#include "../Headers/funcs.h"

using std::cout;
using std::endl;
using std::cin;
using std::string;
using std::vector;

// #############################################################
/**
 * Remember that a structure declaration doesn’t actually create the member variables. It only
 * declares what the structure “looks like.” The member variables are created in memory when
 * a structure variable is defined. Because no variables are created by the structure declaration,
 * there’s nothing that can be initialized there.
 * */
// Function Prototypes

// #############################################################

int main() {
	Log("\n\n------------------ Struct -------------------[\n\n{ V-#1 }");
	// #############################################################
	EmployeePay employee1 = { "Alias111", 141, 18.75  };
	EmployeePay employee2 = { "Alisia", 1115, 17.50  };
	// Calculate pay for employee1
	EmployeeData(employee1);
	cout << '\n';
	EmployeeData(employee2);

	Log("\n----------------------- A Struct With Arrays -----------------------|\n\n{ V-#2 }");
	// #############################################################
	BookInfo bookList[20];// Holds 20 books in the list

	BookBin(bookList);

	Log("\n--------------------------- Nested Structs -------------------|\n\n{ V-#3 }");
	// #############################################################
	Item widget;

	PricingOptions(widget);

	Log("\n--------------------------------- Accept Structure By &Reference Variables As Arguments -------------|\n{ V-#4 }");
	// #############################################################
	InventoryItem part;
	 /* void GetItem(InventoryItem&); */
	// Argument passed by reference
	GetItem(part);
	PrintAnyT('\n');
	/* void showItem(InventoryItem); */
	// Argument passed by value
	ShowItem(part);

	Log("\n--------------------------- Function *Pointer Struct Var Parameter -------------------|\n{ V-#5 }");
	Student freshman;

	// Get student data
	cout << "Enter the following student data:\n";
	// Pass the &address from the pointer
	// function of the freshman structure.
	GetData(&freshman);
	cout << "\nHere is the student data you entered:\n";

	// Now display the data stored in freshman
	auto freshmanName = freshman.name;
	auto freshmanID = freshman.idNum;
	auto freshmanHrs = freshman.creditHours;
	auto freshmanGPA = freshman.gpa;
	/** std::setprecision: Sets the decimal precision to be
	 * used to format floating-point values on output operations.
	 * This manipulator is declared in header <iomanip>.*/
	cout << std::setprecision(3);
	cout << "Name: " << freshmanName << endl;
	cout << "ID Number: #" << freshmanID << endl;
	cout << "Credit Hours: " << freshmanHrs << endl;
	cout << "GPA: " << freshmanGPA << endl;

	Log("\n------------------ Struct -------------------[\n");

	End();
}








