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
long long bigmod(long long num, long long pow, long long mod)
{
	if (pow == 0)
	{
		return 1;
	}
	if (pow % 2 == 0)
	{
		int dou = bigmod(num, pow / 2, mod);
		return ((dou % mod) * (dou % mod)) % mod;
	}
	else
	{
		return ((num % mod) * bigmod(num, pow - 1, mod)) % mod;
	}
}
int main()
{
	long long num, pow, mod;
	while (cin >> num >> pow >> mod)
	{
		cout << bigmod(num, pow, mod) << endl;
	}
}