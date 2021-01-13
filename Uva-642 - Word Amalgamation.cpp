#include<bits/stdc++.h>
using namespace std;
int main()
{
	multimap<string, string> mp;
	string str;
	vector<string> v1;
	int i = 0;
	while (cin>>str)
	{
		if (str == "XXXXXX")
		{
			break;
		}
		else
		{
			v1.push_back(str);
		}
	}
	sort(v1.begin(), v1.end());
	for (int i = 0; i < v1.size(); i++)
	{
		string ch,temp;
		temp = ch = v1[i];
		sort(ch.begin(), ch.end());
		mp.insert({ ch,temp });
	}
	while (cin >> str)
	{
		if (str == "XXXXXX")
		{
			break;
		}
		else
		{
			sort(str.begin(), str.end());
			int flag = 0;
			auto pos = mp.equal_range(str);
			for (auto it =pos.first ; it != pos.second; it++)
			{
				flag = 1;
				cout << it->second << '\n';
			}
			if (flag == 1)
			{
				cout << "******\n";
			}
			else if (flag == 0)
			{
				cout << "NOT A VALID WORD\n******\n";
			}
		}
	}

	mp.clear();
}