#include <iostream>
using namespace std;
int main()
{
int a, d, n, i, tn;
int sum = 0;
cout<<"Enter the first term of the A.P.series: "<<endl;
cin>>a;
cout<<"Enter the total numbers in the A.P.series: "<<endl;
cin>>n;
cout<<"Enter the common difference of A.P.series: "<<endl;
cin>>d;
sum = (n * (2 * a + (n - 1)* d ))/ 2;
tn = a + (n - 1) * d;
cout<<"Sum of the A.P series is:" <<endl;
for (i = a; i <= tn; i = i + d )
{
 if (i != tn)
 printf("%d + ", i);
 else
 printf("%d = %d ", i, sum);
 }
 return 0;
}
