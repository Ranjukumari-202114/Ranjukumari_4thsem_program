/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<iostream>
using namespace std;

class Box
{
    private:
    int length;
    
    public:
    
    void set_length(int i)
    {
        length=i;
    }
    
    friend int print_length(Box b);
};

int print_length(Box b)
{
    return int(b.length);
}

int main()
{
    Box A;
    A.set_length(38);
    cout<<"Length of box"<<" "<<print_length(A);
    return 0;
}