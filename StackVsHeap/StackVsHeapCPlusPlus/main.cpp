#include "heplers.h"
using std::cout;
using std::endl;
using std::cin;
using std::string;

int main()
{
    Log("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");

    Log("--------------- Stack Vs Heap ---------------\n");


    Log("[ Allocated on the Stack ]");
    auto value = 5;
    Log(value);

    Log("[ Allocated on the Heap ]");
    int array[5];
    array[0] = 1;
    array[1] = 2;
    array[2] = 3;
    array[3] = 4;
    array[4] = 5;
    Log(array);

    auto* hValue = new int;
    *hValue = 5;
    Log(hValue);

    auto* heap = new int[5];
    Log(heap);
    auto* heapy = new Heapy();
    Log(heapy);
    // We have to manually delete
    // the objects in the heap
    delete hValue;
    delete[] heap;
    delete heapy;



    Log("--------------- Stack Vs Heap ---------------\n");



    Log("\n\n\n\n\n\n\n\n\n\n\n\n");

    cin.get();
}
