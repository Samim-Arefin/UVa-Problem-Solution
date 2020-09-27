#include<iostream>
using namespace std;
int cal(long long int num)
{
int add=0,digit;
while(num>0)
{
digit=num%10;
add=add+digit;
num=num/10;
}
return add;
}

int main()
{
long long int num,sum;
while(1)
{
cin>>num;
if(num==0)
{
break;
}
sum=num;
while(sum>9)
{
sum=cal(num);
}
cout<<sum<<endl;
}
}
