#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	long long num,num2,count=0,max=0,temp=0;
	double root=0.0;
	while(t--)
	{
	cin>>num>>num2;
	for(long long i=num;i<=num2;i++)
	{
		root=sqrt(i);
		for(long long j=1;j<=root;j++)
	  {
		if(i%j==0)
		{
			count++;
			if(root>j)
			{
				count++;
			}
		}
	  }
		if(count>max)
		{
			max=count;
			temp=i;
		}
		count=0;
	}
	cout<<"Between "<<num<<" and "<<num2<<", "<<temp<<" has a maximum of "<<max<<" divisors."<<endl;
	max=temp=0;
	}
}
