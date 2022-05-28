/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<iostream>
using namespace std;
  
class A
{
public:
  A()  { cout << "A's constructor called" << endl; }
};
  
class B
{
public:
  B()  { cout << "B's constructor called" << endl; }
};
  
class C: public A, public B // Note the order
{
public:
  C()  { cout << "C's constructor called" << endl; }
};
int main()
{
    C k;
    return 0;
}