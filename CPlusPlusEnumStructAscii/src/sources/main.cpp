#include <iostream>
using std::string;

#define Log(x) std::cout << "-=>$: [ " << x << " ]" << std::endl;
#define Log2(x) std::cout << x << std::endl;

enum class ClassColor { red = 'a' };

struct Cat {
	int hairLength;
	string hairColor;
	int fatness = 5;
};

int main() {
	auto str1 = "_______________ ENUM EXAMPLE _______________\n"
			    "{ Enums give scope to values }";
	Log2(str1)
	// Converting an ascii character to an int
	auto red = static_cast<int>(ClassColor::red);
	Log(red)// Console output '97'

	// * STRUCT EXAMPLE
	auto str2 = "_______________ STRUCT EXAMPLE _______________\n"
			 "{ Structs: Aggregate data-type or way"
			 " to package related vars together }";

	Log2(str2)


	std::cin.get();
}