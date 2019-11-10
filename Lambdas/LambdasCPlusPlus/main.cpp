#include "helpers.h"
using std::cout;
using std::endl;
using std::cin;
using std::string;
using std::vector;
using std::find_if;


int main()
{
    Log("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");

    Log("--------------- Lambdas ---------------\n{ V-#1 }");

    vector<int> values = {1, 2, 3,4 ,5};
    auto lambda = [](auto value) {
        cout << "Values: " << value << endl;
    };
    ForEachTypeT(values, lambda);


    Log("----------------------------------------------\n{ V-#2 }");
    //##################################################################

    auto a = 5;
    vector<int> values2 = {1, 2, 3,4 ,5};
    auto lambda2 = [=](auto value) {
        cout << "Values: " << a << endl;
    };
    ForEachTypeT4(values, lambda2);


    //##################################################################

    Log("\n");
    Log("----------------------------------------------\n{ V-#3 }");
    vector<int> values3 = {12, 22, 31,45 ,5};
    auto it = std::find_if(values3.begin(), values3.end(), [](int value) {
        return value > 40;
    });
    cout << "Values Greater Then 40: [ " << *it << " ]" << endl;


    //##################################################################

    Log("----------------------------------------------\n{ V-#4 }");


    Log("\n--------------- Lambdas ---------------\n");

    Log("\n\n\n\n\n\n\n\n\n");

    cin.get();
}
