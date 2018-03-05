#include<iostream>
using namespace std;
int main()
{int i,n,arr[n];
cout<<"Enter the number of elements in array : "<<endl;
cin>>n;
cout<<"Input elements of array : "<<endl;
for(i=0;i<n;i++)
cin>>arr[i];
cout<<"The elements of array with its index are : "<<endl;
for(i=0;i<n;i++)
{cout<<arr[i]<<"\t"<<i<<endl;
}
return 0;
}
