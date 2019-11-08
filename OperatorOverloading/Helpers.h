#pragma once

#include <iostream>

#define Log(x) std::cout << x << std::endl
#define UserInput(x) std::cin << x

// Declare & complete definition here
// Will not work in a Helpers.cpp file
struct Vector2 {
    float x, y;

    // Constructor
    Vector2(float x, float y): x(x), y(y) {}
    // Adds two vectors together
    Vector2 Add(const Vector2& other) const {
        return operator+(other);
    }
    // Adds two vectors together
    Vector2 Multiply(const Vector2& other) const {
        return operator*(other);
    }
    // The '+' operator overloader
    Vector2 operator+(const Vector2& other) const {
        return Vector2(x + other.x, y + other.y);
    }
    // The '+' operator overloader
    Vector2 operator*(const Vector2& other) const {
        return Vector2(x * other.x, y * other.y);
    }
    // Comparing objects instead of using '.equals' like in Java 😑
    bool operator==(const Vector2& other) const {
        //NOTE!! Will give a warning for
       //comparing floating points 'other.foo'
        return (x == other.x) && (y == other.y);
    }

    bool operator!=(const Vector2& other) const {
        //NOTE!! Will give a warning for
       //comparing floating points 'other.foo'
        return !(*this == other);
    }
};

// Parent definition of anything 'std' related
// Defined in a overloaded function operator
std::ostream& operator<<(std::ostream& stream, const Vector2& other) {
    stream << other.x << ", " << other.y;
    return stream;
}

