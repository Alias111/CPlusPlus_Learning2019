#include "helpers.h"
using std::cout;
using std::endl;
using std::cin;
using std::string;
using std::vector;

int main()
{
    Log("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");

    Log("--------------- Function-Pointers ---------------\n{ V-#1 }");
    // Calling 'HolaMundo' by reference becuase if we
    // call the function with 'HolaMundo()<=' you'll
    // get an error. Call it by reference to get its
    // address in memory or as a pointer to the address
    auto myFunc = HolaMundo;// The same as &HolaMundo
    // Calling myFunc
    myFunc();

    // Using typedef
    typedef void(*MiGente)();
    // After passing by reference the value
    // Of HolaMundo to myFunc, we are are now
    // Using the typedef keyword & then passing
    // by reference with a type MiGente which returns
    // void. From myFunc to myfunc2 as a pointer reference.
    MiGente myFunc2 = myFunc;
    // Calling type MiGente myFunc2
    myFunc2();

    Log("----------------------------------------------\n{ V-#2 }");
    //##################################################################

    // Same type of function as above but with
    // a parameter
    typedef void(*MiGente2)(int);
    // You need to pass the parameter,
    // HolaMundoV2 takes one parameter type int
    MiGente2 remixFunc = HolaMundoV2;
    // Calling remixFunc but this time we must pass
    // an int parameter
    remixFunc(17);

    //##################################################################

    Log("\n");
    Log("----------------------------------------------\n{ V-#3 }");
    // Using a pointer function as a parameter
    vector<int> values = {2, 5, 4, 3, 1};
    ForEachTypeT(values, HelpingOutFunc);// CallBack

    //##################################################################

    Log("----------------------------------------------\n{ V-#4 }");
    vector<int> values2 = {16, 5, 7, 18, 6};
    // This time we will call a lambda function/Anonymous function
    // as the callback parameter
    ForEachTypeT(values2, [](auto value) {
        cout << "Value with a Lambda: " << value << endl;
    });

    Log("----------------------------------------------\n{ V-#5 }");
    auto lambda = [](auto value) {
        cout << "Value with a Lambda Declared: " << value << endl;
    };

    ForEachTypeT(values2, lambda);

    Log("\n--------------- Function-Pointers ---------------\n");

    Log("\n\n\n\n\n\n\n\n\n");

    cin.get();
}
