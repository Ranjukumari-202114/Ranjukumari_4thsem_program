/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
class Time
{
    private:
    int minute;
    int hour;
    
     public:
     Time()              // Default constructor
     {
         
     } 
     Time(int hr, int min)
      {
        hour = hr;
        minute = min;
      }
 
     void getTime(int hr, int min)
      {
            hour = hr;
           minute = min;
      }
 
     void displayTime()
     {
        cout << "The hours are : " << hour << endl;
        cout << "The minutes are : " << minute << endl;
     }
     
     friend Time print_time(Time t1,Time t2);
     
};
 
 Time  print_time(Time t1, Time t2)
 {
    Time final;
    final.minute = t1.minute + t2.minute;
    final.hour = final.minute / 60;
    final.minute = final.minute % 60;
    final.hour = final.hour + t1.hour + t2.hour;
    return final;
 }

int main() 
{
    Time t1,t2,t3;
    t1.getTime(23,54);
    t2.getTime(56,42);
    t1.displayTime();
    t2.displayTime();
    t3 = print_time(t1,t2);
    cout << "The hours and minutes after sum= "<<endl;
    t3.displayTime();
    return 0; 
    
    
    
    
    
    
}