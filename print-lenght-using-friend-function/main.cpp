/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<iostream>
using namespace std;

 int queue[20],n=20,front=-1,rear=-1;
 
 void enqueue()
 {
     int val;
     if(rear=n-1)
     {
         cout<<"queue overflow"<<endl;
     }
     else
     {
         if(front==-1)
           front=0;
           cout<<"insert the element in queue:"<<endl;
           cin>>val;
           rear++;
           queue[rear]=val;
     }
 }
 void dequeue()
 {
     if(front==-1||front>rear)
     {
         cout<<"queue underflow"<<endl;
     }
     else
     {
         cout<<"element deleted from is :"<<queue[front]<<endl;
         front++;
     }
 }
 
 void display()
 {
     if(front == -1)
     {
         cout<<"queue is empty"<<endl;
     }
     else
     {
         cout<<"queue elements are :";
         for(int i=front; i<rear;i++)
         cout<<queue[i]<<" "<<endl;
     }
 }
 
 int main()
 {
     cout<<enqueue <<" "<<endl;
     cout<<dequeue <<" "<<endl;
     cout<<display<<" "<<endl;
     cout<<exit<<" "<<endl;
    
     
     while(1)
     {
         int ch;
         cout<<"enter your choice"<<endl;
         cin>>ch;
         
         switch(ch)
         {
             case 1:
               enqueue();
               break;
             case 2:
               dequeue();
               break;
             case 3:
               display();
               break;
             case 4:
               exit(0);  
             
             default:
             cout<<"wrong choice";
         }
     }
     
     return 0;
 }