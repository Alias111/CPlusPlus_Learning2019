#include "helpers.h"
using std::cout;
using std::endl;
using std::cin;
using std::string;

int main()
{
    Log("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");

    Log("--------------- Raw-Pointers ---------------\n");

    // void* pointer
    // A pointer its just a memory address. Its just an integer
    // EXAMPLE#1
    int var = 8;
    // Taking the memory address of 'var' & assigning it to 'ptr'
    void* ptr = &var;
    PrintAnyT("\n[ Example#1 ]\nPointers Address:");
    cout << "=> " << ptr << endl;

    // EXAMPLE#2
    int var2 = 17;
    int* ptr2 = &var2;
    // Now lets dereference the pointer *foo
    // Since im dereferencing that pointer i can
    // now read from & access that data
    // Lets change ptr's value to '10'
    *ptr2 = 10;
    PrintAnyT("\n[ Example#2 ]\nPointers Address:");
    Log(ptr2);// Will print out memory adress
    PrintAnyT("\n[ Example#2B ]\nPointers New Value: var2:");
    Log(var2);// Will output its new value '10'

    // EXAMPLE#3
    // Asking for 8 bytes of memory
    // & returning a pointer to the
    // Beginning of that block of memory
    char* buffer = new char[8];
    // The memset function fills a block of data that we specify
    // Taking the pointer & adding it to the beginning
    // block of memory memset(pointer, value, bytes);
    // void	*memset(void *__b, int __c, size_t __len);
    memset(buffer, 0, 8);

    delete[] buffer;

    Log("\n--------------- Raw-Pointers ---------------\n");

    Log("\n\n\n\n\n\n\n\n\n");

    cin.get();
}
