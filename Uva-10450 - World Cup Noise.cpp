#include<bits/stdc++.h>
using namespace std;
vector<long long> v1;
void precalculate()
{
	v1.push_back(0);
	v1.push_back(2);
	v1.push_back(3);
	for (int i = 3; i < 52; i++)
	{
		long long temp = v1[i - 1] + v1[i - 2];
		v1.push_back(temp);
	}
}
int main()
{
	precalculate();
	int t;
	cin >> t;
	for (int i = 1; i <= t; i++)
	{
		cout << "Scenario #" << i << ":\n";
		int num;
		cin >> num;
		cout << v1[num] << "\n";
		if (i < t)
		{
			cout << "\n";
		}
	}
	cout << '\n';
}