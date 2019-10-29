// https://codeforces.com/problemset/problem/1249/D1
#include <iostream>
#include "Book.cpp"

#define Log(x) std::cout << x << std::endl

int main() 
{
    Book book("Harry Potter", "JK Rowlings", 501);
    book.ToString();
    std::cin.get();
}
