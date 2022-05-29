#include<iostream>
using namespace std;
class Person 
{
    public:
	Person(int x)
	{ 
	    cout << "Person called" << endl; 
	    
	}
};

class Faculty : public Person 
{
     public:
	Faculty(int x):Person(x) 
	{
      	cout<<"Faculty called"<< endl;
	}
};

class Student : public Person 
{

     public:
	Student(int x):Person(x) 
	{
		cout<<"Student called"<< endl;
	}
};

class CSE : public Faculty, public Student 
{
    public:
	CSE(int x):Student(x), Faculty(x) 
	{
		cout<<"CSE called"<< endl;
	}
};

int main()
{
	CSE ta1(30);
}
