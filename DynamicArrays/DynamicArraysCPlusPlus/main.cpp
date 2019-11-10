#include "helpers.h"
using std::cout;
using std::endl;
using std::cin;
using std::string;
using std::vector;

struct Vertex {
    float x, y, z;
};

std::ostream& operator<<(std::ostream& stream, const Vertex& vertex) {
    stream << vertex.x << ", " << vertex.y << ", " << vertex.z;
    return stream;
}
// Makes sure we are only passing the vertex by reference
// & not creating copies
void Function(const std::vector<Vertex>& vertices) {}

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



    //##################################################################

    Log("\n----------------------------------------------|\n{ V-#4 }");


    Log("\n------------------ Dynamic-Arrays -------------------[\n");

    End();
}
