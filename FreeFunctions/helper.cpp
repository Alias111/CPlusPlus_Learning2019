#include <iostream>
#include "helper.h"
using std::cin;

bool IsPrime(int n) {
    bool prime = true;

    for (auto i = 2; i <= n / i; i++) {
        auto factor = n / i;

        if (factor* i == n) {
            std::cout << "Found Factor: " << factor << std::endl;
            prime = false;
            break;
        }
    }
    return prime;
}

void IsPrimeCheck() {
    auto n = 0;

    Log("Enter a number:");
    Log("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    cin >> n;

    if ( IsPrime(n) ) {
        Log("Is a prime number..\n");
    } else Log("Is not a prime number...\n");

}

