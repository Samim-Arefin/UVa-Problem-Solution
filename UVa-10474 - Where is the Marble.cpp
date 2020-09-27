#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, q;
	static int t = 0;
	while (cin >> n >> q, n > 0 && q > 0)
	{
		vector<int> v1;
		for (int i = 0; i < n; i++)
		{
			int temp;
			cin >> temp;
			v1.push_back(temp);
		}
		sort(v1.begin(), v1.end());
		cout << "CASE# " << ++t << ":\n";
		while (q--)
		{
			int num;
			cin >> num;
			vector<int>::iterator it;
			it = find(v1.begin(), v1.end(), num);
			if (it != v1.end())
			{
				cout << num << " found at " << it - v1.begin() + 1 << '\n';
			}
			else
			{
				cout << num << " not found\n";
			}
		}
		v1.clear();
	}
}