#include<bits/stdc++.h>
#define Max 55
long long arr[Max];

void calculate(){
		arr[0] = 1;
		arr[1] = 1;
		for (int i=2; i<Max; i++)
		{
			arr[i]=arr[i-1] + arr[i-2];
		}
}
int main()
{
	calculate();
	int num;
	while (std::cin >> num,num>0)
	{
		std::cout<<arr[num]<<'\n';
	}
}
