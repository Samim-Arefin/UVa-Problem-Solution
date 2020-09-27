#include<iostream>
#include<vector>
#include<map>
#include<string>
#include<math.h>
#include<algorithm>
using namespace std;
int main()
{
	vector<int> v1,v2;
	int num;
	while (cin >> num)
	{
		for (int i = 0; i < num; i++)
	{
		int temp;
		cin >> temp;
		v1.push_back(temp);
	}
		v2.push_back(0);
	for (int i = 1; i < v1.size(); i++)
	{
		int sum = 0;
		sum = abs(v1[i - 1] - v1[i]);
		v2.push_back(sum);
	}
	sort(v2.begin(), v2.end());
	bool check = true;
	for (int i = 1; i < v2.size(); i++)
	{
		if (v2[i] != i)
		{
			check = false;
			break;
		}
	}
	if (check)
	{
		cout << "Jolly" << endl;
	}
	else
	{
		cout << "Not jolly" << endl;
	}
	v1.clear(), v2.clear();
	}

}