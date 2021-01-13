#include<iostream>
#include<vector>
#include<math.h>
#include<algorithm>
#include<cstdio>
#include<bitset>
using namespace std;
#define Max 1000005
bitset<Max> arr;
int primecount[Max];
void sieve()
{
	arr[1] = 1;
	for (int i = 4; i < Max; i += 2)
	{
		arr[i] = 1;
	}
	for (int i = 3; i * i < Max; i += 2)
	{
		if (arr[i] == 0)
		{
			for (int j = i * i; j < Max; j += i + i)
			{
				arr[j] = 1;
			}
		}
	}
}
int sumdigit(int num)
{
	int sum = 0;
	while (num > 0)
	{
		sum += num % 10;
		num /= 10;
	}
	return sum;
}
int main()
{
	sieve();
	int t, count = 0;
	{
		for (int i = 1; i <= Max; i++)
		{
			if (arr[sumdigit(i)] == false && arr[i] == false)
			{
				count++;
			}
			primecount[i] = count;
		}
		int t;
		cin >> t;
		while (t--)
		{
			int num, num2;
			cin >> num >> num2;
			cout << primecount[num2] - primecount[num - 1] << endl;
		}
	}
}