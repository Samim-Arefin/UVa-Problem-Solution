#include<iostream>
using namespace std;
int main()
{
	int num,count=0;
	while(cin>>num,num>0)
	{
		cout<<"Case "<<++count<<": "<<num/2<<endl;
	}
}
