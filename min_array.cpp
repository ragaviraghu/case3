#include<iostream>
using namespace std;
int main()
{ int n,min;
int array[50];
cout<<"Enter the number of elements in array : "<<endl;
cin>>n;
cout<<" The elements of array are : ";
for(int i=0;i<n;i++)
{cin>>array[i];
cout<<"\n";
}
min=array[0];
for(int i=1;i<n;i++)
{ if(array[i]<min)
{min=array[i];
}
}
cout<<"The minimum element in the given array is : "<<min<<endl;
return 0;
}
