#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
#include<map>
#include<utility>
#include<math.h>
#include<sstream>
#include<set>
#include<bitset>
#include<list>
#include<stack>
#define Max 1000005
using namespace std;
bitset<Max> arr;
void sieve()
{
	arr[0] = arr[1] = true;
	for (int i = 4; i < Max; i += 2)
	{
		arr[i] = true;
	}
	for (int i = 3; i * i < Max; i += 2)
	{
		if (arr[i] == false)
		{
			for (int j = i * i; j < Max; j += i + i)
			{
				arr[j] = true;
			}
		}
	}
}
long long rev(long long num)
{
	long long sum = 0;
	while (num > 0)
	{
		sum = (sum * 10) + num % 10;
		num /= 10;
	}
	return sum;
}
int main()
{
	sieve();
	long long num;
	while (cin >> num)
	{
		if (arr[rev(num)] == false && arr[num] == false && num != rev(num))
		{
			cout << num << " is emirp." << endl;
		}
		else	if (arr[rev(num)] == false && arr[num] == false && num == rev(num))
		{
			cout << num << " is prime." << endl;
		}
		else if (arr[rev(num)] != false && arr[num] == false)
		{
			cout << num << " is prime." << endl;
		}
		else
		{
			cout << num << " is not prime." << endl;
		}
	}

}