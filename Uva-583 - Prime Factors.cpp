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
#define Max 100000005
using namespace std;
bitset<Max> arr;
vector<long long> v1;
void sieve()
{
	arr[0] = arr[1] = true;
	for (long long i = 4; i < Max; i += 2)
	{
		arr[i] = true;
	}
	for (long long i = 3; i * i < Max; i += 2)
	{
		if (arr[i] == false)
		{
			for (long long j = i * i; j < Max; j += i + i)
			{
				arr[j] = true;
			}
		}
	}
	for (long long i = 0; i < Max; i++)
	{
		if (arr[i] == false)
		{
			v1.push_back(i);
		}
	}
}
vector<long long> primegenerate(long long num)
{
	vector<long long> s;
	vector<long long>::iterator it;
	for (long long i = 0; v1[i] * v1[i] <= num; i++)
	{
		if (num % v1[i] == 0)
		{
			while (num % v1[i] == 0)
			{
				num /= v1[i];
				s.push_back(v1[i]);
			}
		}
	}
	if (num > 1)
	{
		s.push_back(num);
	}
	return vector<long long>(s.begin(), s.end());
}
int main()
{
	sieve();
	long long num;
	while (cin >> num)
	{
		if (num == 0)
		{
			break;
		}
		else if (num < 0)
		{
			vector<long long> v(primegenerate(abs(num)));
			cout << num << " = -1 x ";
			for (int i = 0; i < v.size(); i++)
			{
				cout << v[i];
				if (i + 1 < v.size())
				{
					cout << " x ";
				}
			}
			cout << endl;
		}
		else
		{
			vector<long long> v(primegenerate(num));
			cout << num << " = ";
			for (int i = 0; i < v.size(); i++)
			{
				cout << v[i];
				if (i + 1 < v.size())
				{
					cout << " x ";
				}
			}
			cout << endl;
		}
	}
}