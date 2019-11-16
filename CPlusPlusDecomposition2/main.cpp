// Description: A program to decide the best of three methods of compensation

#include <iostream>
using namespace std;

// constants which are used throughout the program
// The #define preprocessor allows us to define symbolic names and constants.

#define kPricePerUnit 225  // average price of a pair of shoes
#define kWeeklyWage 600    // current weekly wage - Method 1
#define kSalary 7.0        // hourly salary - Method 2
#define kHoursPerWeek 40    // number of hours worked - Method 2
#define kCommission2  0.10  // commission - Method 2
#define kCommission3 0.2    // commission - Method 3
#define kBonusPerUnit 20    // bonus  - Method 3

// A function to get the weekly sales of units to get weekly pay
int getWeeklySales() {
	int units;
	cout << "Enter number of units sold per week: ";
	if (!(cin >> units)) {
		cout << "Numbers only" << endl;
		return 0;
	} else return units;
}

// Using of of the #defined 'const' in a method
void getWeeklyPay() {
	// char32_t is an unsigned integer
	// type used for 32-bit wide characters
	 cout << "Wages Per Week: $" << kWeeklyWage << endl;
}
// Calculation for salary and commission
void calcSalaryCommission(int sales) {
	double perHr, totalPay, commission;

	perHr = kSalary * kHoursPerWeek;
	commission = (sales * kPricePerUnit) * kCommission2;
	totalPay = perHr + commission;

	cout << "Salary Plus Commission Total: $" << totalPay << endl;
}
// Method 3: No salary, but 20% commissions
// and $20 for each pair of shoes sold
void twentyTwentyCom(int sales) {
	int extraMula;
	double totalPay, commission;

	extraMula = kBonusPerUnit * sales;
	commission = (sales * kPricePerUnit) * kCommission3;
	totalPay = extraMula + commission;

	cout << "Extra Cash: $" << totalPay << endl;
}

int main()
{
	int weeklySales; // Output variable

	weeklySales = getWeeklySales();

	if (weeklySales == 0) return 0;

		getWeeklyPay();
		calcSalaryCommission(weeklySales);
		twentyTwentyCom(weeklySales);
}