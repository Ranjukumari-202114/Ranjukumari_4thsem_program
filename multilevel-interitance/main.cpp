/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

class India
{
    public:
    void set_fun1()
    {
        cout<<"India is my country"<<endl;
    }
};

class Bihar:public India
{
    public:
    void set_fun2()
    {
        cout<<" i live in Bihar"<<endl;
    }
};

class Areraj:public Bihar
{
    public:
    void set_fun3()
    {
        cout<<"Areraj is my home town"<<endl;
    }
};


int main()
{
    Areraj s;
    s.set_fun1();
    s.set_fun2();
    s.set_fun3();
   
    
    cout<<"Hello World";

    return 0;
}