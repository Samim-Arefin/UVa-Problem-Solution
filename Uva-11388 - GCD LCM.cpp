#include<bits/stdc++.h>
using namespace std;
long long GCD(long long a, long long b)
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
long long LCM(long long a, long long b, long long gcd)
{
	return ((a / gcd) * b);
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		long long a, b, G = 0, L = 0;
		cin >> a >> b;
		G = GCD(a, b);
		L = LCM(a, b, G);
		if (a == G && b == L)
		{
			cout << a << " " << b << endl;
		}
		else
		{
			cout << "-1" << endl;
		}
	}
}