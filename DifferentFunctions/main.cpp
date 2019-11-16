#include <iostream>
#include "helpers.h"
using std::cout;
using std::endl;
using std::cin;

int main()
{
    Log("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");

    Stack_And_Heap();

    cout << "10 + 7 = [ " << Add(10, 7) << " ]" << endl;

    int n = 10;
    Log(n);
    inc(n);
    Log(n);

    Log("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");

    return 0;
}
