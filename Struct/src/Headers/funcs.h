#pragma once

#include "headers.h"
#include "headers.h"
#include "funcs.h"
#include <string>
#include <iomanip>

// Example#1
struct EmployeePay {
	std::string name;
	int empNum;
	double payRate;
	double hours;
	double grossPay;
};
// Example#2
struct BookInfo {
	std::string title;
	std::string author;
	std::string publisher;
	double price;
};
// Example#3
/*** Sometimes it’s helpful to nest
 *   structures inside other structures. */
struct Costs {
	double wholesale;
	double retail;
};
struct Item {
	std::string partNum;
	std::string description;
	// Pricing of type "Cost"
	Costs pricing;
};
// Example#4
struct InventoryItem {
	int partNum;
	std::string description;
	int onHand;
	double price;
};
// Example#5
struct Student {
	std::string name;
	int idNum;
	int creditHours;
	double gpa;
};
// #############################################################
/* Function Prototypes */
//*******************************************************
// Definition of function getData. Uses a pointer to a *
// Student structure variable. The user enters student *
// information, which is stored in the variable. *
//*******************************************************
void GetData(Student* student) {

	// Get student name.
	std::cout << "Student Name: ";
	std::getline(std::cin, student->name);

	// Get the student ID number.
	std::cout << "Student ID number: ";
	std::cin >> student->idNum;

	// Get the credit hrs enrolled.
	std::cout << "Credit hrs Enrolled: ";
	std::cin >> student->creditHours;

	// Get the GPA.
	std::cout << "Current GPA: ";
	std::cin >> student->gpa;
}


/* Function Prototypes */
//************************************************************
//! Definition of function getItem. This function uses       *
//  a structure &reference variable as its parameter. It asks*
//? the user for information to store in the structure.      *
//************************************************************
//------------------------------------------------------
// Uses a reference parameter
void GetItem(InventoryItem &p) {
	// Get the parts number
	std::cout << "Enter the part number#: ";
	std::cin >> p.partNum;

	// Get the part description.
	std::cout << "Enter the part description: ";
	std::cin >> p.description;

	// Get the quantity on hand.
	std::cout << "Enter the quantity on hand: ";
	std::cin >> p.onHand;

	// Get the unit price
	std::cout << "Enter the unit price: ";
	std::cin >> p.price;
}
//***********************************************************
// Definition of function showItem. This function accepts *
// an argument of the InventoryItem structure type. The *
// contents of the structure is displayed. *
//***********************************************************
void ShowItem(InventoryItem p) {
	std::cout << std::fixed <<  std::setprecision(2);
	std::cout << "Part Number#: " << p.partNum << std::endl;
	std::cout << "Description: " << p.description << std::endl;
	std::cout << "Units On Hand: " << p.onHand << std::endl;
	std::cout << "Price: $" << p.price << std::endl;
}
//-----------------------------------------------------

void PricingOptions(Item &widget) {
	auto wholeSalePrice = widget.pricing.wholesale = 100.0;
	auto retailPrice = widget.pricing.retail = 150.0;

	std::cout << "The whole sale price of the item: $"
	     << wholeSalePrice << std::endl;

	std::cout << "The retail price of the item: $"
	     << retailPrice << std::endl;
}

void BookBin(const BookInfo *bookList) {
	for (auto index = 0; index < 2; index++) {
		auto title = bookList[index].title;
		title = "\nBook";
		auto author = bookList[index].author;
		author = "\nAuthor";
		auto publisher = bookList[index].publisher;
		publisher = "\nPublisher";
		auto price = bookList[index].price;
		price = 20.0;

		std::cout << title;
		std::cout << author;
		std::cout << publisher;
		std::cout << '\n' << price;
	}
}

void EmployeeData(EmployeePay &employee1) {
	std::cout << "Name: " << employee1.name << std::endl;
	std::cout << "Employee Number: " << employee1.empNum << std::endl;
	std::cout << "Enter the hours worked by this employee: ";
	std::cin >> employee1.hours;
	employee1.grossPay = employee1.hours * employee1.payRate;
	std::cout << "Gross Pay: " << employee1.grossPay << std::endl << std::endl;
}


