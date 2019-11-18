#include <utility>
#include "../headers/Helpers.h"
using std::cout;
using std::endl;
using std::cin;
using std::string;
using std::vector;

//############################################################################
//*************************
// ! Reference Parameters *
// ! Pass By Value        *
// ! Pass By Reference    *
//*************************
// ? Example { V-#1 }
// Stores the copy of the data variable
void ChangeNameByVal(string name);// Passed by value
// Stores the address of the data variable
void ChangeNameByRef(string &aNameChange, string name);// Passed by reference as an alias
// ? Example { V-#2 }

//############################################################################

int main()
{
	Log("\n\n------------------ Function-&-References -------------------[\n\n{ V-#1 }");
	//############################################################################
	string characterName = "Tommy";

	ChangeNameByVal(characterName);// Creates a copy
	ChangeNameByRef(characterName, "Alias111");

	Log("\n----------------------------------------------|\n\n{ V-#2 }");
	//############################################################################

	Log("\n------------------ Function-&-References -------------------[\n");

	End();
}

//************************************************
// ? This function will change the "name" variable
//************************************************
void ChangeNameByVal(string name) {// Will create a copy
	cout << "IM JUST A COPY-CAT:==> " << name << endl;
}
void ChangeNameByRef(string &aNameChange, string name) {
	aNameChange = std::move(name);
	cout << "GOT MOVED BY AN rValue:==>" << aNameChange << endl;
}


