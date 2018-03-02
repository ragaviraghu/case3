#include<iostream>
using namespace std;
int main()
{int i,j,a,n,arr[n];
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
cout<<"The sorted array is : "<<endl;
for (i = 0; i < n; ++i)
cout<<arr[i]<<"\t";
}
