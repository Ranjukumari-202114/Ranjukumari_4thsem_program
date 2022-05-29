/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

class Unary
{
    private:
     int side;
    
    public:
    Unary(int sd){
        side=sd;
    }
    void fun()
    {
        side= 0;
    }
    void fun(int x)
    {
        side = x;
    }
    void display()
    {
        
        cout<<"the value of side is "<<side<<endl;
    }
    void operator ++()
    {
        side++;
        
    }
};

int main()
{
    int len;
    cout<<"enter the value of side";
    cin>>len;
    Unary obj(len);
    obj.display();
    ++obj;
    obj.display();
    return 0;
}