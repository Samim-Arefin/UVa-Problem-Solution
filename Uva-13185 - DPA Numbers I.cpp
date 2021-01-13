#include<bits/stdc++.h>
using namespace std;
int divide(int num)
{
	int sum = 0;
	for (int i = 1; i * i <= num; i++)
	{
		if (i * i == num)
		{
			sum += i;
		}
		else if (num % i == 0)
		{
			sum += i;
			if (num / i != num)
			{
				sum += num / i;
			}
		}
	}
	return sum;
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int num;
		cin >> num;
		if (divide(num) == num)
		{
			cout << "perfect\n";
		}
		else if (divide(num) > num)
		{
			cout << "abundant\n";
		}
		else
		{
			cout << "deficient\n";
		}
	}
}