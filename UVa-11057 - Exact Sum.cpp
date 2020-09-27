#include<bits/stdc++.h>
using namespace std;
int main()
{
	int size;
	while (cin >> size)
	{
		vector<int> v1;
		for (int i = 0; i < size; i++)
		{
			int temp;
			cin >> temp;
			v1.push_back(temp);
		}
		int value;
		cin >> value;
		sort(v1.begin(), v1.end());
		int first = 0, second = 0, diff = 1000001;
		for (int i = 0; i < size; i++)
		{
			for (int j = i + 1; j < size; j++)
			{
				if (v1[i] + v1[j] == value && abs(v1[i] - v1[j]) < diff)
				{
					first = v1[i];
					second = v1[j];
					diff = abs(v1[i] - v1[j]);
				}
			}
		}
		cout << "Peter should buy books whose prices are " << first << " and " << second << ".\n\n";
		v1.clear();
	}
}