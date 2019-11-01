#ifndef CPLUSPLUSCLASSES3_HUMAN_H
#define CPLUSPLUSCLASSES3_HUMAN_H

class Human {
	// Anything in between here &
	// the beginning of public is private
	// by default

	// ! What others can see
public:
	// ! Constructor( ctor ) member method
	// * Creates a instance
	Human(); // Default constructor
	// ? Overloaded the constructor
	Human(int num);

	// ! Copy Constructor( cctor ) member method
	// ! Handy when wanting to copy the data from
	// ? one class to another class.
	Human(const Human& humanAddress);

	// ! Destructor( dtor ) member method
	// * Destroys an instance
	// * Cannot take parameters or be overloaded
	// * Has no return value. It just DESTROYS!!!
	~Human();// Destructor
//	~Human(int bar); ERROR!!!!

	// ! methods (Member functions)
	bool walk();
	int age;


	// ? What the children of the class can see
protected:
	// ! Later project

	// What no one can see
private:
	// * Attributes of the class
};

#endif //CPLUSPLUSCLASSES3_HUMAN_H
