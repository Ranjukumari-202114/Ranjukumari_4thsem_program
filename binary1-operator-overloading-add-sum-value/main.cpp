/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

class Add
{
    
     
    
    public:
    int a,b;
    Add()
    {
       a=0;
       b=0;
    }
    Add(int x,int y)
    {
       a=x;
       b=y;
    }
    
    Add operator +(Add d)
    {
        Add d1;
        d1.a= a+d.a;
        d1.b= b+d.b;
        return d1;
    }
};

int main()
{
    Add obj1(4,4), obj2(3,6);
    Add d1;
    d1= obj1+obj2;
    cout<<"the value of a ="<<d1.a<<endl;
    cout<<"the value of b ="<<d1.b<<endl;
    

    return 0;
}
