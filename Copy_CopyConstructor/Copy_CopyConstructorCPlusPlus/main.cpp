#include "helpers.h"
using std::cout;
using std::endl;
using std::cin;
using std::string;
using std::vector;

//#####################################################################
class StrCopyExample {
private:
    // Creating an old school array of characters
    char* m_Buffer;
    /*The unsigned keyword is a data type specifier, that
     * makes a variable only represent positive numbers and zero.*/
    unsigned int m_Size;

public:
    // Constructor
    StrCopyExample(const char* str) {
        // Checking how long the string is
        m_Size = strlen(str);
        // Now we can find out the size of our buffer
        m_Buffer = new char[m_Size + 1];
        // Now copying the character pointer into our buffer
        //memcpy(Destination, SRC, Size) instead of doing a for-loop
        memcpy(m_Buffer, str, m_Size);// Each char is 1 bit of memory
        // adding our own null termination character
        m_Buffer[m_Size] = 0;
        }

    // A copy constructor is a constructor that takes
    // a const reference of the same class to create a copy
    // Will create a shallow copy into the members of the class
    StrCopyExample(const StrCopyExample& other): m_Size(other.m_Size) {
        // To check how many times the string was copied
        // If everything works right, it should only
        // be copied once!
        cout << "Copied string.." << endl;

        m_Buffer = new char[m_Size + 1];
        memcpy(m_Buffer, other.m_Buffer, m_Size + 1);// Each char is 1 bit of memory

    }


    // Deconstructor
    ~StrCopyExample() {
        delete [] m_Buffer;
    }

    char& operator[](unsigned int index) {
        return m_Buffer[index];
    }

    // A way to access a private member is with the keyword `friend'
    friend std::ostream& operator<<(std::ostream& stream, const StrCopyExample& str);

};

//#####################################################################

std::ostream& operator<<(std::ostream& stream, const StrCopyExample& str) {
    stream << str.m_Buffer;
    return stream;
}

void PrintMe(StrCopyExample str) { cout << str << endl; }
// Referencing the existing copy so
// we do not make useless extra copies
void PrintMeRight(StrCopyExample& str) { cout << str << endl; }

int main()
{

    Log("\n\n------------------ Copy_&_Copy_Constructors -------------------[\n\n{ V-#1 }");

    // Both are pointing to the same buffer of memory
    StrCopyExample str = "Alias111";

    StrCopyExample str2 = str;

    str2[2] = 'a';
    // Will output Alias111 twice & one copy
    cout << str << endl;
    // Only assigns a copy here. Since we are trying to
    // create two different strings.
    cout << str2 << endl;



    Log("\n----------------------------------------------|\n\n{ V-#2 }");
    //##################################################################

    // Both are pointing to the same buffer of memory
    StrCopyExample str3 = "Alias111";
    StrCopyExample str4 = str;

    str2[2] = 'a';
    // Will output Alias111 twice & Three copies in total
    PrintMe(str3);
    PrintMe(str4);

    //##################################################################

    Log("\n----------------------------------------------|\n\n{ V-#3 }");

    // Both are pointing to the same buffer of memory
    StrCopyExample str5 = "Alias111";
    StrCopyExample str6 = str;

    str2[2] = 'a';
    // Will output Alias111 twice & one copy
    PrintMeRight(str3);
    // Only assigns a copy here. Since we are trying to
    // create two different strings.
    PrintMeRight(str4);
    //##################################################################

    Log("\n----------------------------------------------|\n{ V-#4 }");


    Log("\n----------------------------------------------|\n{ V-# Bonus}");



    Log("\n------------------ Copy_&_Copy_Constructors -------------------[\n");

    End();
}
