// Description: This process of development is called decomposition,
// which means breaking a task into sub-tasks, each of which is easy to do.

#include <iostream>
using namespace std;

/* An implementation of Euclid's algorithm for computing gcd.
 * Fundamental idea of Euclid's algorithm (one of the oldest known algorithms)
 * for finding the greatest common divisor of two integers:
 * gcd(a, 0) = a
 * gcd(a, b) = gcd(b, a % b)  // % means modulo, that is, the remainder of a/b.
 * For example, gcd(6, 4) = 2; gcd(12, 18) = 6. */

void printStr(char* str) {
	cout << str << endl;
}

int gcd(int a, int b) {
	int temp;
	while (b != 0) {
		temp = a % b;
		a = b;
		b = temp;
	}
	return a;
}

int main()
{
	int x, y;
	printStr("Enter two integers");

	if (!(cin >> x >> y)) printStr("Please only enter integers");
	else {
		cout << "gcd( " << x << ", " << y << " ) = "
		     << gcd(x, y) << endl;
	}

	return 0;
}

