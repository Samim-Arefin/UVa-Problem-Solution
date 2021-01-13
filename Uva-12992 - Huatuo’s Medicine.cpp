#include<iostream>
using namespace std;
int main()
{
	int num,t,count=0;
	cin>>t;
	while(t--)
	{
		cin>>num;
		cout<<"Case #"<<++count<<": "<<(2*num-1)<<endl;
	}
}
