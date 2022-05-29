/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;
class Side
{
    private:
    int num;                   //member variable
    
    public:
    Side()                         //default constructor
    {
        num = 0;
    
    }
    Side(int x)             //parameterized constructor
    {
        num = x;
        
    }
    
    void operator ++(int)    //postfix unary operator
    {
        num++;
    }
    
    void operator ++()              //prefix unary operator
    {
        num++;
    }
    
    
    ~Side()                           //destructor 
    {
        cout<<"destructor"<<endl;
    }
    
    
    void display()                           //display the value
    {
        cout<<"the value of num = "<<num<<endl;
    }
};

int main()

{
    Side s1(5);
    s1.display();
    s1++;
    s1.display();
    ++s1;
    s1.display();


    return 0;
}