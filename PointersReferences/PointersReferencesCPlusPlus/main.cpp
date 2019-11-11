#include "helpers.h"
using std::cout;
using std::endl;
using std::cin;
using std::string;
using std::vector;

//#####################################################################
class Alias111 {
public:
    int bar;
    int foo;
    char chizzy;
};

//#####################################################################

int main()
{
    Log("\n\n------------------ Pointer_Reference -------------------[\n\n{ V-#1 }");
    // Declaring a variable
    auto n = 5;
    // Declaring a pointer. You place the asterick
    // on the type so you know i want a pointer type foo.
    // When you dclare it it is not pointing to anything.
    int* p;
    // Pointing p to the ampersan(Address) of n
    // so that p = n, which is equal to 5.
    // p = 17; can not assign a integer to a pointer.\\ ERROR
    // p = &f; while f equals float f = 420.0f\\ ERROR
    // A float variable can not be = to an int!
    /* int* p;
     * p = nullptr;
     * p += 64; you can assign nullptr when a pointer is
     * not pointing to anything
     *
     * You can assign one pointer to another pointer
     * if there types are compatible
       int n = 5;
     * int* p = &n;
     * int* q = p;
     * */

    p = &n;
    // When you want to access the target of the pointer
    // You place the asterick in front of the variable.
    // When you want to access or whats call dereferencing
    // the pointer, or get me the thing foo is pointing too.
    // Then add 64 to it. so p = n which n = 5,
    // which p = 5 + 64 = 69. Now store that in the variable
    // that p is pointing to -> n and make n = 69.
    *p += 64;
    // n = 69 now
    cout << "Since *p is dereferencing & adding 64 to n now = [ "
         << n << " ]" << endl;
    // Prints out the address
    cout << "'p's address: => [ " << p << " ]" << endl;

    Log("\n----------------------------------------------|\n\n{ V-#2 }");
    //##################################################################
    // Swapping the value of two variables
    auto m = 7;
    // Outputs original values
    cout << "Value #1 before swap => [ " << m << " ]" << endl;
    auto z = 10;
    cout << "Value #2 before swap => [ " << z << " ]" << endl;

    // Use the ampersand to pass the address of the pointers
    // in the function 'Swap'.
    SwapByPtr(&m, &z);

    //##################################################################
    Log("\n----------------------------------------------|\n\n{ V-#3 }");
    // pointer init
    auto* ptr = &m;// grabbing int:'m'= 7 from the last example
    cout << "Making a new pointer after it was swapped = m: [ "
         << m << " ]" << endl;
    cout << "Pointer address = ptr: [ " << ptr << " ]" << endl;

    // You can also declare it without init
    int* ptr2;
    // You can retarget a pointer when ever you like
    ptr2 = &z;// grabbing int:'z'= 10 from the last example
    cout << "Making a new pointer after it was swapped = m: [ "
         << z << " ]" << endl;
    cout << "Pointer address = ptr: [ " << ptr2 << " ]" << endl;

    //##################################################################
    Log("\n----------------------------------------------|\n{ V-#4 }");
    auto j = 17;
    auto u = 8;
    // Short reference example
    int& ref = j;
    /* ERROR! cannot declare a reference without init */
    // int& ref2;
    // This code cannot retarget!
    // Swapped 'u' into 'j' like our Swap() function
    ref = u;
    cout << "This code stores the value of 'u' into 'j': [ "
         << j << " ]" << endl;

    //##################################################################
    Log("\n----------------------------------------------|\n{ V-#5 }");
    // Using a reference swap function which
    // is much easier to look at and use.
    auto noPtr = 9;
    cout << "Value #1 before swap => [ " << noPtr << " ]" << endl;
    auto noRef = 8;
    cout << "Value #2 before swap => [ " << noRef << " ]" << endl;

    // Call the 'Swap()' function with no references
    SwapByRef(noPtr, noRef);

    //##################################################################
    Log("\n----------------------------------------------|\n{ V-#6 }");
    // Creating an Alias Object
    Alias111 alias111;

    auto* p_Alias111 = &alias111;
    // Accessing a member of the Alias111 class
    auto* p_Int = &alias111.foo;
    cout << "Passing the pointer p_Int into the reference of &alias111.foo: [ "
         << p_Int << endl;
    // The dot '.' operator is working on the
    // dereferenced object. If we remove the paranthesis
    // it will try to apply the dot operator to the pointer.
    // You will get an error and we want the dot operator
    // point at the object that it points too.
    // Thats why we dereference it first, and then it is going
    // to get the address of the 'chizzy' member.
    // Then place it in the char* pointer p_Char.
    // long version of dereferencing & getting the member address:
    // &(*p_Alias111).chizzy
    auto* p_Char = &p_Alias111 -> chizzy;
    cout << "Passing the pointer p_Int into the reference of &alias111 -> chizzy: [ "
         << p_Char << " ]" << endl;

    //##################################################################
    Log("\n----------------------------------------------|\n{ V-#7 }");
    // Accessing members of an array by way of pointer
    int arr[4] = { 10, 11, 12, 13 };

    auto* p_ArrPtr = &arr[2];// Address of array at index '2'
    cout << "Address of array at index '2' & storing it in  the pointer p_ArrPtr:\n"
         << "[ " << p_ArrPtr << " ]" << endl;

    Log("\n------------------ Pointer_Reference -------------------[\n");

    End();
}
