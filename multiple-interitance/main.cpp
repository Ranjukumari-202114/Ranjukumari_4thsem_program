/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

class operation
{
    public:
    void fun1()
    {
        cout<<" all operations in maths"<<endl;
    }
};

class sum
{
    public:
    void fun2()
    {
        cout<<"addition in maths"<<endl;
    }
};

class subtraction
{
    public:
    void fun3()
    {
        cout<<"subtraction in maths"<<endl;
    }
};

class multiplication:public subtraction,public sum,public operation
{
    public:
    void fun4()
    {
        cout<<"multiplication in maths";
    }
    
    
};


int main()
{
    multiplication obj;
    obj.fun1();
    obj.fun2();
    obj.fun3();
    obj.fun4();
    
    return 0;
}