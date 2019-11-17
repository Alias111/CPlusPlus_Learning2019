#include "../headers/helpers.h"

using std::cout;
using std::endl;
using std::cin;
using std::string;
using std::vector;
using std::setprecision;
using std::iterator;

//########################################################################################
// ! { V-#1 }
double Divide(int numerator, int denominator);
// ! { V-#2 }
template <typename T> T Square(T number);
// ! { V-#3 }
template <typename T> void SwapVars(T &aVar1, T &aVar2);
// ! { V-#4 }
template <typename T, typename R>
	int Largest(const T & aVar1, R &aVar2);
// ! { V-#5 }
template <typename T, typename R> T Sum(T aVal1, R aVal2);
template <typename T> T Sum(T aVal1, T aVal2, T aVal3);
// ! { V-#6 }

//########################################################################################
int main()
{
	Log("\n\n------------------ Exceptions_Templates_STL(Standard-Library) -------------------[\n\n{ V-#1 }");
	//########################################################################################
	// Error testing is usually a straightforward process
	// involving if statements or other control mechanisms.

	// This program demonstrates an exception
	// being thrown and caught.
	int num1, num2;
	double quotient;// Holds the quotient of the numbers

	// Get the two numbers.
	cout << "Enter two numbers: ";
	cin >> num1 >> num2;

	// Divide num1 by num2 and catch any potential exceptions
	try {
		// Im going to purposely divide by '0' to
		// check that exception is handled & also
		// enter two values that divide to check that
		// the divide function is working.
		/* ! If this statement throws an exception */
		quotient = Divide(num1, num2);
		// ! Then this statement is skipped.
		cout << "The quotient is equal to = " << quotient << endl;

	} catch (string exceptionStr) {
		cout << exceptionStr;
	}
	cout << "End of the program.\n";

	Log("\n----------------------------------------------|\n\n{ V-#2 }");
	//########################################################################################
	//********************************************************************************
	// A function template is a “generic” function that can work with any data
	// type. The programmer writes the specifications of the function, but substitutes
	// parameters for data types. When the compiler encounters a call to the
	// function, it generates code to handle the specific data type(s) used in the call.
	//********************************************************************************
	int userInt; // To hold the integer input
	double userDouble; // To hold the double input

	cout << setprecision(5);// Rounded to the nearest 0.00005
	cout << "Enter an integer & a floating-point value: ";
	cin >> userInt >> userDouble;

	cout << "Here ae their squares: ";
	// Since the function "Square()" is generic
	// We can use the function to square
	// different number types
	cout << Square(userInt) << " & "
		 << Square(userDouble) << endl;

	Log("\n----------------------------------------------|\n\n{ V-#3 }");
	//########################################################################################
	//********************************************************
	// ! The function, swapVars , uses two references to
	// ! type T as parameters. The function swaps the
	// ! contents of the variables referenced by the parameters.
	//********************************************************
	char firstChar, secondChar;
	int firstInt, secondInt;
	double firstDouble, secondDouble;

	// ! Using our template function to swapVars
	// ! two chars. Since its generic it works fine.
	cout << "Enter two characters: ";
	cin >> firstChar >> secondChar;
	SwapVars(firstChar, secondChar);
	cout << endl;

	// ! Using our template function to swapVars
	// ! two ints. Since its generic it works fine.
	cout << "Enter two integers: ";
	cin >> firstInt >> secondInt;
	SwapVars(firstInt, secondInt);
	cout << endl;

	// ! Using our template function to swapVars
	// ! two doubles. Since its generic it works fine.
	cout << "Enter two floating point numbers: ";
	cin >> firstDouble >> secondDouble;
	SwapVars(firstDouble, secondDouble);
	cout << endl;

	Log("\n----------------------------------------------|\n{ V-#4 }");
	//########################################################################################
	//*************************************************
	// ! More than one generic type may be used in a function
	// ! template. Each type must have its own parameter.
	//*************************************************
	auto i = 0;
	auto c = ' ';
	auto f = 0.0f;
	auto d = 0.0;

	cout << "Comparing an int & a double, the largest\n"
		 << "of the two is " << Largest(i, d) << "_|bytes.\n";
	cout << "Comparing a char & a float, the largest\n"
		 << "of the two is " << Largest(c, f) << " _|bytes.\n";

	Log("\n----------------------------------------------|\n{ V-#5 }");
	//########################################################################################
	//**************************************************************
	// ! This program demonstrates an overloaded function template.
	//**************************************************************

	double n1, n2, n3;

	// Get two values and display their sum.
	cout << "Enter two values: ";
	cin >> n1 >> n2;
	Sum(n1, n2);

	// Get three values and display their sum.
	cout << "Enter three values: ";
	cin >> n1 >> n2 >> n3;
	Sum(n1, n2, n3);

	Log("\n----------------------------------------------|\n{ V-#6 }");
	//########################################################################################
	//***************************************************************************
	// ! This program provides a simple demonstration of the vector STL template.
	//***************************************************************************

	int cuenta; // Loop counter
	// Define a vector object
	vector<int> vect;

	// Use the size member function to get
	// the number of elements in the vector.
	cout << "vect starts with: " << vect.size() << " elements.\n";

	// Use push_back to push values into the vector.
	for (cuenta = 0; cuenta < 3; cuenta++) {
		vect.push_back(cuenta);
	}

	// Display the size of the vector now.
	cout << "Now vect has " << vect.size()
		 << " elements. Here they are:\n";

	// Use the [] operator to display each element
	for (cuenta = 0; cuenta < vect.size(); cuenta++) {
		cout << vect[cuenta] << " ";
	} cout << endl;

	// Use the pop_back member function.
	cout << "Popping the values out of vect...\n";
	for (cuenta = 0; cuenta < 3; cuenta++) {
		vect.pop_back();
	}
	// Display the size of the vector now.
	cout << "Now vect has " << vect.size() << " elements.\n";

	Log("\n----------------------------------------------|\n{ V-#7 }");
	//########################################################################################
	int cuenta2; // Loop counter

	// Define a vector
	vector<int> vect2;

	// Define an iterator
	vector<int>::iterator iter;

	// Use the push_back to push values into the vector.
	for (cuenta2 = 0; cuenta2 < 3; cuenta2++) {
		vect2.push_back(cuenta2);
	}

	// Step the iterator through the vector,
	// and use it to display the vector's contents.
	cout << "Here are the values in vect: ";
	for (iter = vect2.begin(); iter < vect2.end(); iter++) {
		cout << *iter << " ";
	}

	// Step the iterator through the vector backwards.
	cout << "\nand here they are backwards: ";
	for (iter = vect2.end() - 1; iter >= vect2.begin(); iter--) {
		cout << *iter << " ";
	}


	Log("\n------------------ Exceptions_Templates_STL(Standard-Library) -------------------[\n");

	End();
}

//*********************************************
// The divide function divides the numerator *
// by the denominator. If the denominator is *
// zero, the function throws an exception. *
//*********************************************
double Divide(int numerator, int denominator) {
	if (denominator == 0) {
		string exceptionStr = "[ERROR]: Cannot divide by zero.\n";
		throw exceptionStr;
	}
	return static_cast<double>(numerator) / denominator;
}

//*****************************************
// Template definition for a function that
// squares a number.
//*****************************************
template <typename T> T Square(T number) {
	return number * number;
}

//*****************************************
// Template definition for a function that
// swaps values of different data types and
// passes the values by reference.
//*****************************************
template <typename T> void SwapVars(T& aVar1, T& aVar2) {

	T temp;
	T temp2 = aVar1;

	aVar1 = aVar2;
	temp = aVar2;

	std::cout <<"Value #1 after swap by "
			  "reference function: [ " << temp << " ]"
	          << "\nValue #2 after swap by"
			  " reference function: [ " << temp2 << " ]";
}

//******************************************************
// Because the function parameters are specified with
// different types, the function generated from this
// template can accept two arguments of different types.
//******************************************************
template <typename T, typename R>
    int Largest(const T & aVar1, R &aVar2) {

	if ((sizeof(aVar1)) > (sizeof(aVar2))) {
		return sizeof(aVar1);
	} else return sizeof(aVar2);
}

//**************************************************************
// Overloading with Function Templates Function templates
// may be overloaded. As with regular functions, function
// templates are overloaded by having different parameter lists.
//**************************************************************
template <typename T, typename R> T Sum(T aVal1, R aVal2) {
	cout << "Their sum is:==> " << aVal1 + aVal2 << endl;
	return aVal1 + aVal2;
}

template <typename T> T Sum(T aVal1, T aVal2, T aVal3) {
	cout << "Their sum is:==> " << aVal1 + aVal2 + aVal3 << endl;
	return aVal1 + aVal2 + aVal3;
}
//**************************************************************
// *************************************************************
//**************************************************************

