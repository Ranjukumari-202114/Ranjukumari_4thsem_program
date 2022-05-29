/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

// C++ program to explain
// Single inheritance
#include<iostream>
using namespace std;


class  Inheritance
{
    public:
    Inheritance()
    {
        cout<<"this is the base class";
    }
};
class Single_inheritance:public Inheritance
{
    
};

int main()
{
    Inheritance obj;
    return 0;
}

