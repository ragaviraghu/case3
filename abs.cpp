#include <iostream>
using namespace std;
int main()
{ int hour1,hour2,min1,min2,dif,t1,t2,r_hour,r_min;
cout<<"Enter the First time input in hours and minutes : "<<endl;
cin>>hour1>>min1;
cout<<"Enter the Second time input in hours and minutes : "<<endl;
cin>>hour2>>min2;
t1=hour1*60+min1;
t2=hour2*60+min2;
if(t1>t2)
{dif=t1-t2;}
else
{dif=t2-t1;}
r_hour=dif/60;
r_min=dif%60;
cout<<"The differece between given two times is : "<<r_hour<<" hours "<<r_min<<" minutes "<<endl;
return 0;
}
