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
vector<int> v1;
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
	for (int i = 0; i < Max; i++)
	{
		if (arr[i] == false)
		{
			v1.push_back(i);
		}
	}
}
int primegenerate(int num)
{
	set<int> s;
	set<int>::iterator it;
	for (int i = 0; v1[i] * v1[i] <= num; i++)
	{
		if (num % v1[i] == 0)
		{
			while (num % v1[i] == 0)
			{
				num /= v1[i];
				s.insert(v1[i]);
			}
		}
	}
	if (num > 1)
	{
		s.insert(num);
	}
	int temp = s.size();
	return temp;
}
int main()
{
	sieve();
	int num;
	while (cin >> num, num > 0)
	{
		cout << num << " : " << primegenerate(num) << endl;
	}
}