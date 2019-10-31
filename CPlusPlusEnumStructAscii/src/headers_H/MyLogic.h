#ifndef CPLUSPLUSENUMSTRUCTASCII_MYLOGIC_H
#define CPLUSPLUSENUMSTRUCTASCII_MYLOGIC_H
#define Log(x) std::cout << x;
#include "../sources/MyLogic.cpp"

namespace myLogic {
	enum Animal;
	enum Groceries;
	void GroceryPrinter(Groceries g);
}



#endif //CPLUSPLUSENUMSTRUCTASCII_MYLOGIC_H
