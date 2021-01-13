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
int GCD(int a, int b)
{
	if (b == 0)
	{
		return a;
	}
	else
	{
		return GCD(b, a % b);
	}
}
int main()
{
	int num;
	while (cin >> num, num > 0)
	{
		int sum = 0;
		for (int i = 1; i < num; i++)
		{
			for (int j = i + 1; j <= num; j++)
			{
				sum =sum + GCD(i, j);
			}
		}
		cout << sum << endl;
	}
}