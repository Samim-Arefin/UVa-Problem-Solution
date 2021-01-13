#include<iostream>
using namespace std;
int arr[20];
int main()
{
	long long max=0,count=0,num,mul=1;
	while(cin>>num)
	{
		for(int i=0;i<num;i++)
		{
			cin>>arr[i];
		}
		for(int i=0;i<num;i++)
		{
		    mul=1;
			for(int j=i;j<num;j++)
			{
				mul*=arr[j];
				if(mul>max)
				{
					max=mul;
				}
			}
		}
		cout<<"Case #"<<++count<<": The maximum product is "<<max<<"."<<endl<<endl;
		max=0;
	}
}
