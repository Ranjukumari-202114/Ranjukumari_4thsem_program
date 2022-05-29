/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;



class University
{
    public:
    void fun1()
    {
        cout<<"The name of my university is central university of haryana"<<endl;
    }
    
};

class College:public University
{
    public:
    void fun2()
    {
        cout<<"The name of my college is Bhimraw ambedkar university"<<endl;
    }
};

class School:public College
{
    public:
    void fun3()
    {
        cout<<"The name of my school is maa sarswati mandir"<<endl;
    }
};



int main(void)
{
    School d1;
    d1.fun1();
    d1.fun2();
    d1.fun3();

    return 0;
}