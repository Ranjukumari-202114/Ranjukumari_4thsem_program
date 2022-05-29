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
    int feet,inch;
    Add()
    {
       feet=0;
       inch=0;
    }
    Add(int x,int y)
    {
       feet=x;
       inch=y;
    }
    
    Add operator +(Add d)
    {
        Add d1;
        d1.feet= feet+d.feet;
        d1.inch= inch+d.inch;
        return d1;
    }
};

int main()
{
    Add obj1(4,4), obj2(3,6);
    Add d1;
    d1= obj1+obj2;
    cout<<"the value of total feet and inch: ="<<d1.feet<<"'"<<d1.inch<<endl;
    
    

    return 0;
}
