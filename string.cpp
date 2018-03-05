#include <iostream>
#include<cstring>
using namespace std;
int main()
{
char str[100];
int len,flag=0;
cout<<"Enter the string : "<<endl;
cin>>str;
len=strlen(str);
for(int i=0;i<len;i++)
{if(str[i]>='0'&&str[i]<='9')
{flag++;
}
else
{continue;
}
}
if(flag==len)
cout<<"The given string is numeric"<<endl;
else
cout<<"The give string is not numeric"<<endl;
return 0;
}
