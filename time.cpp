#include <iostream>
using namespace std;
int main() 
{
int time=0,minutes=0,hours=0;
cout<<"Enter the time in minutes : "<<endl;
cin>>time;
minutes=time%60; 
hours=(time-minutes)/60; 
cout<<"The time in hours and minutes : "<<hours<<" hours "<<minutes<<" minutes"<<endl; 
return 0;
}
