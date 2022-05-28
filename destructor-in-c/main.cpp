/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

class Complex
{
    private:
    int a,b;
    
    public:
    
    Complex(int x,int y)
    {
       a=x;
       b=y;
    }
     ~Complex()
    {
      cout<<"destructor"; 
    }
    void display()
    {
      cout<<"the value of a="<<a<<endl<<"the value of b="<<b<<endl;
    }
    
    
};

int main()
{
    Complex Obj(23,45);
    
    Obj.display();

    return 0;
}

