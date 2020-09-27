#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
#include<map>
#include<unordered_map>
#include<utility>
#include<math.h>
#include<sstream>
using namespace std;
bool compare(const pair<int, int>& a, const pair<int, int>& b)
{
	if (a.second == b.second)
	{
		return (a.first > b.first);
	}
	else
	{
		return (a.second < b.second);
	}
}
int main()
{
	string str;
	int count = 0;
	while (getline(cin, str))
	{
		if (count > 0)
		{
			cout << endl;
		}
		count++;
		map<int, int> mp;
		map<int, int>::iterator it;
		vector<int> v1;
		for (int i = 0; i < str.size(); i++)
		{
			int num = (int)str[i];
			v1.push_back(num);
		}
		for (int i = 0; i < v1.size(); i++)
		{
			mp[v1[i]]++;
		}
		vector<pair<int, int> >v2(mp.begin(), mp.end());
		sort(v2.begin(), v2.end(), compare);
		for (int i = 0; i < v2.size(); i++)
		{
			cout << v2[i].first << " " << v2[i].second << endl;
		}
		v1.clear();
		v2.clear();
		mp.clear();
		str.clear();
	}
}