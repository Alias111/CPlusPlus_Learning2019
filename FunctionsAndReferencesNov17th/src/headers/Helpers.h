#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <functional>
#include <algorithm>
#include <thread>
#include <iomanip>

//using namespace std::literals::chrono_literals;

#define Log(x) std::cout << x << std::endl
#define UserInput(x) std::cin << x
#define End() std::cin.get()

struct Helpers {
	int x, y;

	// Constructor
	Helpers(int x, int y): x(x), y(y) {}

	bool operator==(const Helpers& other) const {
		//NOTE!! Will give a warning for
		//comparing floating points 'other.foo'
		return (x == other.x) && (y == other.y);
	}
	bool operator!=(const Helpers& other) const {
		//NOTE!! Will give a warning for
		//comparing floating points 'other.foo'
		return !(*this == other);
	}
	// NOTE!!! HAS TO HAVE CONSTRUCTOR OVERLOADED WITH PARAMETERS
	// The '+' operator overloader
	Helpers operator*(const Helpers& other) const {
		return Helpers(x * other.x, y * other.y);
	}
	// The '+' operator overloader
	Helpers operator+(const Helpers& other) const {
		return Helpers(x + other.x, y + other.y);
	}
};

// Template/Super Generic
// TEMPLATES DO NOT GET CREATED UNTIL COMPILE-TIME
// SO THEY DO NOT EXIST UNTIL CALLED
template<typename T, int N>
class MyArray {
private:
	T m_Array[N];

public:
	T GetSize() const { return N; }

};
// Template/Super Generic
// TEMPLATES DO NOT GET CREATED UNTIL COMPILE-TIME
// SO THEY DO NOT EXIST UNTIL CALLED
template<typename T>
void PrintAnyT(T value) {
	std::cout << value << std::endl;
}

// Parent definition of anything 'std' related
// Defined in a overloaded function operator
std::ostream& operator<<(std::ostream& stream, const Helpers& other) {
	stream << other.x << ", " << other.y;
	return stream;
}

// It is going to take the 'Helper' function as
// a parameter for 'ForEachInt' as a pointer
template<typename T>// Template/Generic
auto ForEachTypeT(const std::vector<T>& values, void(*func)(int)) {
	for (T value : values) {
		// Calling the function with
		// the value inside as a parameter
		func(value);
	}
}


template<typename T>// Template/Generic
auto ForEachTypeT2(const std::vector<T>& values, void(*func)(int)) {
	// Calling the function with
	// the value inside as a parameter
	func(values);
}
// Captures[foo] from outside lambda variables
template<typename T>// Template/Generic
auto ForEachTypeT3(const std::vector<T>& values, const std::function<void(int)>& func) {
	// Calling the function with
	// the value inside as a parameter
	func(values);
}

// Captures[foo] from outside lambda variables
template<typename T>// Template/Generic
auto ForEachTypeT4(const std::vector<T>& values, const std::function<void(int)>& func) {
	for (T value : values) {
		// Calling the function with
		// the value inside as a parameter
		func(value);
	}
}

//*****************************************
// To work with Threads.
//*****************************************
// Helper variable for DoWork()
//static bool is_Finished = false;
// Function for multi threading
//void DoWork() {
//
//
//	while (!(is_Finished)) {
//		// While not false, the thread will
//		// continue running.
//		Log("Thread working...");
//		std::this_thread::sleep_for(1s);
//	}
//}
//*****************************************
// To work with Threads.
//*****************************************

// Swaps the value of two variables via pointers
void SwapByPtr(int* pa, int* pb) {

	auto temp = *pa;
	auto temp2 = temp = *pa;

	*pa = *pb;
	temp = *pb;

	std::cout <<"Value #1 after swap by pointer function: [ " << temp << " ]"
	          << "\nValue #2 after swap by pointer function: [ " << temp2 << " ]";
}

// Much cleaner swap!
template <typename T> void SwapByRef(T& aVar1, T& aVar2) {

	T temp;
	T temp2 = aVar1;

	aVar1 = aVar2;
	temp = aVar2;

	std::cout <<"Value #1 after swap by "
	            "reference function: [ " << temp << " ]"
	          << "\nValue #2 after swap by"
	             " reference function: [ " << temp2 << " ]";
}
//"##################################################################"
