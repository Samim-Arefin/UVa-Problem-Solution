#include<iostream>
#include<vector>
#include<string>
#include<math.h>
#include<algorithm>
using namespace std;
int main()
{
	int t;
	cin >> t;
	for (int i = 1; i <= t; i++)
	{
		vector<int>v1;
		int num;
		cin >> num;
		for (int i = 0; i < num; i++)
		{
			int temp;
			cin >> temp;
			v1.push_back(temp);
		}
		int max = 0, min = 0;
		for (int i = 0; i < num - 1; i++)
		{
			if (v1[i] > v1[i + 1])
			{
				max++;
			}
			else if (v1[i] < v1[i + 1])
			{
				min++;
			}
		}
		cout << "Case " << i << ": " << min << " " << max << endl;
		v1.clear();
	}
}