#pragma once

#include <iostream>
#include <string>

#define Log(x) std::cout << x << std::endl
#define UserInput(x) std::cin << x

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

//"##################################################################"
