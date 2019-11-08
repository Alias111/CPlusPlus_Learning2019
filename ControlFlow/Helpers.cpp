#include "Helpers.h"
using std::cout;
using std::endl;
using std::cin;

void If_Flow() {
    int x, y;

    cout << "Enter two numbers" << endl;
    // Storing users two numbers in int 'x' & 'y'
    cin >> x >> y;

    cout << x << " ";
    if ( x > y ) {
        Log("Is larger than ");
    } else if (x == y) {
        Log("Both numbers are '=='");

    }else Log("Is not greater than ");

    cout << y << endl;

    if (x + y > 17) Log("Congrats! You picked the larger number");
}

void WhileFlow() {
    int x;
    Log("Enter the number");
    UserInput(x);

    auto prime = true;
    auto i = 2;

    while (i <= x / i) {
        auto factor = x / i;

        if (factor* i == x) {
            cout << "Factor located: " << i
                 << " * " << factor << endl;
            prime = false;
        }
        i += 1;
    }

    cout << x << " is ";
    if (prime) {
        Log("Prime");
    } else Log("Not Prime");
}

void SwitchFlow() {
    int x;
    Log("Enter a number from 1 & 5, or input '0' to quit...");
    UserInput(x);

    while (x > 0) {
        switch (x)
        {
            case 1: Log("You enetered 1");
                break;
            case 2:
            case 3: Log("You entered either 2 or 3");
                break;
            case 4: Log("You entered 4");
            case 5: Log("You enetered 5");
                break;
            default: Log("you inputted an invalid number or value");
        }
        Log("Enter 0 to quit");
        UserInput(x);
    }
}

void TernaryOperatorFlow() {
    auto x = 99;
    while (x > 0) {
        Log("Enter a number, 0 negative to quit");
        UserInput(x);

        auto ternary = x > 0 ? "Greater than 0": "returned 0";
        cout << "Your number is [ " << ternary << " ]" << endl;
    }
}
