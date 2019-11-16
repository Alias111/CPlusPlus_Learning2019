#include <iostream>
using namespace std;

int multiply(int a, int b) {
	cout << "\nnum1 * num2 = "
	<< "[ " << a * b << " ]"
	<< std::endl;

	return a * b;
}

string printStr(string str) {
	cout << str << endl;
}


int main() {

	multiply(20, 5);

	printStr("Hola Mundo");



	return 0;
}