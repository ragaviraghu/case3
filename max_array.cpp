#include<iostream>
using namespace std;
int main()
{ int n,max;
int array[50];
cout<<"Enter the number of elements in array : "<<endl;
cin>>n;
cout<<" The elements of array are : ";
for(int i=0;i<n;i++)
{cin>>array[i];
cout<<"\n";
}
max=array[0];
for(int i=1;i<n;i++)
{ if(array[i]>max)
{max=array[i];
}
}
cout<<"The maximum element in the given array is:"<<max<<endl;
return 0;
}
