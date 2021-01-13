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
int main()
{
	sieve();
	int num, count;
	while (cin >> num, num >= 4)
	{
		count = 0;
		for (int i = 2; i <= (num / 2); i++)
		{
			if (arr[i] == false)
			{
				int temp = num - i;
				if (arr[temp] == false)
				{
					count++;
				}
			}
		}
		cout << count << endl;
	}
}