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
using namespace std;
int main()
{
	int c;
	cin >> c;
	while (c--)
	{
		long long a, b, k, count, sum = 0, temp, digit = 0;
		cin >> a >> b >> k;

		for (long long i = a; i <= b; i++)
		{
			temp = count = 0;
			if (i % k == 0)
			{
				for (long long j = 1; j * j <= i; j++)
				{
					if (j * j == i)
					{
						count++;
						temp += j;
					}
					else if (i % j == 0)
					{
						count = count + 2;
						long long t = i / j;
						temp += t + j;
					}
				}
			}
			sum += count;
			digit += temp;
		}
		cout << sum << " " << digit << endl;
	}
}