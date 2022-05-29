/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
// C++ program to implement
// Hierarchical Inheritance
#include <iostream>
using namespace std;

class Vehicle                   //base class
{
    public:
	Vehicle() 
	{ cout << "This is a Vehicle\n"; }
};


class Car : public Vehicle 
{
    
};


class Bus : public Vehicle 
{
    
};


int main()                       // main function
{

	Car obj1;                     	// Creating object of sub class will
	                            // invoke the constructor of base class.
	Bus obj2;
	return 0;
}
