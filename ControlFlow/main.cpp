#include <iostream>
#include "Helpers.h"
using std::cout;
using std::endl;
using std::cin;

int main()
{
    Log("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    Log("----------------- if-statement -----------------");

    // Testing if function
    If_Flow();

    Log("***\n* *\n* *\n***");
    Log("------------------- while-loop -------------------");

    // Testing while function
    WhileFlow();

    Log("***\n* *\n* *\n***");
    Log("------------------- while-loop -------------------");

    // Testing Switch function
    SwitchFlow();

    Log("***\n* *\n* *\n***");
    Log("------------------- Ternary'?'operator   -------------------");

    // Testing Ternary '?' operator (if) function
    TernaryOperatorFlow();

    Log("\n\n\n\n\n\n\n\n\n");

    return 0;
}
