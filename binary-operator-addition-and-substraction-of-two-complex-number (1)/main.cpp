/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

/* use binary (+) operator to add two complex numbers. */

#include <iostream>  
using namespace std;  
class Complex_num  
{  
 
    int x, y;  
    public:  
         
        void inp()  
        {  
            cout << " Input two complex number: " << endl;  
            cin >> x >> y;  
        }         
     
        Complex_num operator + (Complex_num obj)  
        {  
              
            Complex_num A;  
  
            A.x = x + obj.x;  
            A.y = y + obj.y;  
            return (A);  
        }         
      
        Complex_num operator - (Complex_num obj)  
        {  
              
            Complex_num A;  

            A.x = x - obj.x;  
            A.y = y - obj.y;  
            return (A);  
        }
        
        // display the result of addition  
        void print()  
        {  
            cout << x << " + " << y << "i" << "\n";  
        }  
          
        // display the result of subtraction  
        void print2()  
        {  
            cout << x << " - " << y << "i" << "\n";  
        }  
};  
int main ()  
{  
Complex_num x1, y1, sum, sub; // here we created object of class Addition i.e x1 and y1   
     
    x1.inp();  // accepting the values 
    y1.inp();     
    // add the objects  
    sum = x1 + y1;  
    sub = x1 - y1; // subtract the complex number     
    // display user entered values  
    cout << "\n Entered values are: \n";  
    cout << " \t";  
    x1.print();  
    cout << " \t";  
    y1.print();   
    cout << "\n The addition of two complex (real and imaginary) numbers: ";  
    sum.print(); // call print function to display the result of addition     
    cout << "\n The subtraction of two complex (real and imaginary) numbers: ";  
    sub.print2(); // call print2 function to display the result of subtraction  
    return 0;  
}  