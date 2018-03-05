#include<iostream>
using namespace std;
int main()
{int i,j,a,n,arr[n],m,l;
cout<<"Enter the number of elements in array : "<<endl;
cin>>n;
cout<<"Enter the elements of array : "<<endl;
for(i=0;i<n;i++)
cin>>arr[i];
for(i=0;i<n;i++) 
{
for(j=i+1;j<n;j++)
{
if(arr[i]>arr[j]) 
{a=arr[i];
arr[i]=arr[j];
arr[j]=a;
}
}
}
if(n%2==1)
{
m=n/2;
cout<<"The given array contains odd number of elements "<<endl;
cout<<" The median element in the given array is : "<<arr[m]<<endl;
}
else
{
m=(n-1)/2;
l=n/2;
cout<<"The given array contains even number of elements "<<endl;
cout<<" The median element in the given array is : "<<arr[m]<<"\t"<<arr[l]<<endl;
}
return 0;
}
