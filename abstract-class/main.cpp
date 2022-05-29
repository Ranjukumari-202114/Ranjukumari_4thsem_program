/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>
using namespace std;
class Shape{
    public:
    virtual int no_of_sides()=0;

};
class Trapezoid:public Shape{
public:
int no_of_sides(){
    return 4;
}

};
class Triangle:public Shape{
public:
int no_of_sides(){
    return 3;
}

};
class Hexagon:public Shape{
public:
int no_of_sides(){
    return 6;
}

};
void display(Shape * s){
    cout<<"Number of sides: "<<s->no_of_sides()<<endl;
}
int main (){
    Shape * s1 = new Trapezoid();
    Shape * s2 = new Hexagon();
    Shape * s3 = new Triangle();
    display(s1);
    display(s2);
    display(s3);    
}