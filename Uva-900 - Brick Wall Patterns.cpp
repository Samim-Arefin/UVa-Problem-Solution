#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long arr[50005],num,i;
	while (cin >> num)
	{
		arr[0] = 1;
		arr[1] = 1;
		for (i = 2; i <num; i++)
		{
			arr[i]= arr[i - 1] + arr[i - 2];
		}
		cout<<"The Fibonacci number for "<<num<<" is "<<arr[num-1]<<endl;
	}
return 0;
}
