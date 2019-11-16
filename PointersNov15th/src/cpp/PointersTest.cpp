#include "../headers/Helpers.h"

using std::cout;
using std::endl;
using std::cin;
using std::string;
using std::vector;

//#########################################################

//#########################################################

int main()
{
	Log("\n\n------------------ Pointer_Reference -------------------[\n\n{ V-#1 }");
	/** demonstrates the use of the address operator to display
	 * the address, size, and contents of a variable. */
	 auto x = 17;

	std::cout << "The address of * is:==> " << &x
	          << " Hexadecimal" << std::endl;
	std::cout << "The size of x is:==> " << sizeof(x)
	          << "_Bytes\n";
	std::cout << "The value of x is:==> " << x << std::endl;

	Log("\n----------------------------------------------|\n\n{ V-#2 }");
	//#########################################################
	/** A pointer variable , which often is just called a pointer,
	 * is a special variable that holds a memory address. Memory
	 * addresses identify specific locations in the computer’s memory.
	 * Because a pointer variable holds a memory address,
	 * it can be used to hold the location of some other piece of
	 * data. This should give you a clue as to why it is
	 * called a pointer: It “points” to some piece of
	 * data that is stored in the computer’s memory. Pointer variables
	 * also allow you to work with the data that they point to.
	 * Remember, pointers only hold one kind of value: an address.*/

	/***
	 * demonstrates a very simple usage of a pointer:
	 * storing and printing the address of another variable.
	 */
	 auto j = 25;
	// Pointer variable, that can point to a type "int"
	int* ptr = nullptr;// Same as = '0'
	// Store the address of j in ptr
	ptr = &j;

	cout << "The value in j is:==> " << j << endl;
	cout << "The address of j, stored in *ptr is:==> " << ptr << endl;

	Log("\n----------------------------------------------|\n\n{ V-#3 }");
	//#########################################################
	/***
	 * (*) When the indirection operator is placed in front
	 * of a pointer variable name, it dereferences
	 * the pointer. When you are working with a dereferenced
	 * pointer, you are actually working with the
	 * value the pointer is pointing to. The real benefit of
	 * pointers is that they allow you to indirectly
	 * access and modify the variable being pointed to*/
	auto p = 25;
	// Pointer variable, that can point to a type "int"
	int* ptr2 = nullptr;// Same as = '0'
	// Store the address of j in ptr
	ptr2 = &p;

	cout << "Displays the contents of p:==> " << p << endl;
	cout << "Displays the contents of p in *ptr2:==> " << *ptr2 << "\n\n";

	/** Assign 100 to the location pointed to by ptr.
	 * This 18 will actually assign 100 to x. */
	 *ptr2 = 100;
	// Use both p and ptr2 to display the value in p.
	cout << "The new value of p:==> " << p << endl;
	cout << "The new contents of p in *ptr2:==> "
		 << *ptr2 << "\n\n";

	Log("\n----------------------------------------------|\n{ V-#4 }");
	//#########################################################
	/** This program demonstrates a pointer variable referencing different variables. */
	auto e = 25, f = 50, g = 75;
	int* ptr3 = nullptr;

	// Display the contents of e, f, and g.
	cout << "Here are the values of e, f, & g:\n[ ";
	cout << e << " " << f << " " << g << " ]" << "\n\n";

	// Use the pointer to manipulate e, f, & g.
	ptr3 = &e;
	*ptr3 += 100;

	ptr3 = &f;
	*ptr3 += 100;

	ptr3 = &g;
	*ptr3 += 100;

	// Display the contents of e, f, and g.
	cout << "Here are the new values of e, f, & g:\n[ ";
	cout << e << " " << f << " " << g << " ]" << "\n\n";

	Log("\n----------------------------------------------|\n{ V-#5 }");
	//#########################################################
	/** This program shows an array name being
	 * dereferenced with the 2 operator. */
	short numbers[] = { 10, 20, 30, 40, 50 };

	/** Because numbers works like a pointer to the
	 * starting address of the array, the first
	 * element is retrieved when numbers is dereferenced. */
	cout << "The first element of the array is:==>\n[ ";
	cout << *numbers << " ]\n\n";

	Log("\n----------------------------------------------|\n{ V-#6 }");
	//#########################################################
	// This program processes an array using pointer notation.
	const auto SIZE = 5;// Size of the array
	int numbers2[SIZE];// Array of integers
	int count;// Counter variable

	// Get values to store in a array.
	// Use pointer notation instead of subscripts.
	cout << "Enter " << SIZE << " numbers: ";
	for (count = 0; count  < SIZE; count++) {
		cin >> *(numbers2 + count);
	}

	cout << endl;

	// Display the values in the array that you inputted.
	// Use pointer notation instead of subscripts.
	cout << "Here are the numbers you entered:\n";
	for (count = 0; count  < SIZE; count++) {
		cout << *(numbers2 + count) << " ";
		cout << endl;
	}
	/** When working with arrays, remember the following rule:
	 * array[index] is equivalent to *( array + index ) */
	Log("\n----------------------------------------------|\n{ V-#7 }");
	//#########################################################
	// This program uses a pointer to
	// display the contents of an integer array.
	int set[8] = { 5, 10, 15, 20, 25, 30, 35,40 };
	auto *nums = set;// Store the address of set[] in *num

	// Display the numbers in the array.
	cout << "The numbers in set are:\n";
	cout << *nums << " "; // Display first element
	while (nums < &set[7]) {
		// Advance nums to point to the next element.
		nums++;
		// Display the value pointed to by nums.
		cout << *nums << " ";
		}

	// Display the numbers in reverse order.
	cout << "\nThe numbers in set backward are:\n";
	cout << *nums << " "; // Display first element
	while (nums > set)
		{
		// Move backward to the previous element.
			nums--;
		// Display the value pointed to by nums.
		cout << *nums << " ";
		}
		cout << endl;
	Log("\n----------------------------------------------|\n{ V-#8 }");
	//#########################################################
	// This program uses two functions that accept
	// addresses of variables as arguments.
	double number;

	// Function prototypes
	//	void GetNumber(int *); Prototype
	// Call getNumber and pass the address of number.
	GetNumber(&number);
	// void DoubleValue(int *); Prototype
	// Call doubleValue and pass the address of number.
	DoubleValue(&number);

	// Display the value in number after the two
	// functions are called & the user inputs values.
	cout << "The value doubled is:==> " << number << endl;
	Log("\n------------------ Pointer_Reference -------------------[\n");

	End();
}


