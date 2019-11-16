#include "helpers.h"
using std::cout;
using std::endl;
using std::cin;
using std::string;

int main()
{
    Log("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");

    Log("--------------- Templates ---------------\n");

    cout << "Testing Template 'PrintAnyT':TYPE = INT => ";
    PrintAnyT<int>(5'000'000);
    cout << "Testing Template 'PrintAnyT':TYPE = STRING => ";
    PrintAnyT<string>("5,100,100");
    cout << "Testing Template 'PrintAnyT':TYPE = FLOAT => ";
    PrintAnyT<float>(5.50f);

    cout << "Testing Template 'MyArray[]'<typname T, int N> => ";
    // <typname T, int N>
    MyArray<int, 5> array;
    PrintAnyT(array.GetSize());



    Log("--------------- Templates ---------------\n\n");


    Log("\n\n\n\n\n\n\n\n\n\n\n\n");

    return 0;
}
