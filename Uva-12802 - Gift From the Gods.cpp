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
unsigned long long palindrome(unsigned long long n)
{
	unsigned long long sum = 0;
	while (n > 0)
	{
		sum = sum * 10 + n % 10;
		n /= 10;
	}
	return sum;
}
int main()
{
	sieve();
	unsigned long long num;
	while (cin >> num)
	{
		cout << (num + num) << endl;
		if (arr[num] == 0 && palindrome(num) == num)
			break;
	}
	return 0;
}