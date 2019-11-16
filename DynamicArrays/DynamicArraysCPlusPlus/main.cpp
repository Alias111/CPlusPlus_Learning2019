#include "helpers.h"
using std::cout;
using std::endl;
using std::cin;
using std::string;
using std::vector;

struct Vertex {
    float x, y, z;

    Vertex(float x, float y, float z)
        : x(x), y(y), z(z) {}

    // A copy constructor
    Vertex(const Vertex& vertex)
        : x(vertex.x), y(vertex.y), z(vertex.z) {

            cout << "Vertex copied.." << endl;
    }
};
//#####################################################################

std::ostream& operator<<(std::ostream& stream, const Vertex& vertex) {
    stream << vertex.x << ", " << vertex.y << ", " << vertex.z;
    return stream;
}
// Makes sure we are only passing the vertex by reference
// & not creating copies
void Function(const std::vector<Vertex>& vertices) {}
//#####################################################################

int main()
{

    Log("\n\n------------------ Dynamic-Arrays -------------------[\n\n{ V-#1 }");

    // Creating a vector/array:In C++
    // you can pass primitive types
    vector<Vertex> vertices;
    vertices.push_back({ 1, 2, 3 });// foo.Add() in C#
    vertices.push_back({ 4, 5, 6 });// foo.Add() in C#
    // Takes a const vector as an argument
    Function(vertices);


    for (int i = 0; i < vertices.size(); i++) {
        cout << vertices[i] << endl;
    }



    Log("\n----------------------------------------------|\n\n{ V-#2 }");
    //##################################################################
    vertices.erase(vertices.begin() + 1);
    // Place the '&' so it does not create copies
    // when iterating through the loop
    for (auto& vertex : vertices) {
        cout << vertex << endl;
    }
    // To clear the vertex
    vertices.clear();

    //##################################################################

    Log("\n----------------------------------------------|\n\n{ V-#3 }");
    // Optimizing our vertex
    std::vector<Vertex> vertices2;
    /*  Your going to get 6 vertex/Arrays
     *  because one is being is being
     *  created in the main method & one
     *  is being created in the Vecter struct.
     *  So main is pretty much making a
     *  copy of the instance which is also a
     *  vector. hence why you get multiple copies. */
    vertices2.push_back(Vertex(9, 7, 6));
    vertices2.push_back(Vertex(5, 4, 3));
    vertices2.push_back(Vertex(2, 1, 0));


    //##################################################################

    Log("\n----------------------------------------------|\n{ V-#4 }");
    // Using `reserve` makes sure we have enough
    // memory to created three different vectors
    // without creating any copies.
    std::vector<Vertex> vertices3;// this wont compile `vertices3[3]'
    vertices3.reserve(3);
    vertices3.push_back(Vertex(1, 2, 3));
    vertices3.push_back(Vertex(4, 5, 6));
    vertices3.push_back(Vertex(7, 8, 9));

    Log("\n----------------------------------------------|\n{ V-# Bonus}");
    // With emplace_back we can allocate directly
    // into the vector, in place. Instead of doing
    // like before & just pass the parameter list
    // directly. In place in the actual vector memory
    std::vector<Vertex> vertices4;
    vertices4.reserve(3);
    // Wont print out a single copy!😎
    vertices4.emplace_back(20, 19, 18);
    vertices4.emplace_back(17, 16, 15);
    vertices4.emplace_back(14, 13, 12);


    Log("\n------------------ Dynamic-Arrays -------------------[\n");

    End();
}
