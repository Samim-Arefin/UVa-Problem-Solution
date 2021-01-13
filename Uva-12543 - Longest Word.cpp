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
using namespace std;
int main()
{
	string str, ch, temp;
	set<string>s;
	while (cin >> str)
	{
		if (str == "E-N-D")
		{
			break;
		}
		else
		{
			ch = "";
			for (int i = 0; i < str.size(); i++)
			{
				if (str[i] == ' ')
				{
					continue;
				}
				else
				{
					if (isalpha(str[i]))
					{
						ch += tolower(str[i]);
					}
					else if (str[i] == '-')
					{
						ch += str[i];
					}
				}
			}
			if (ch.size() > 0)
			{
				stringstream ss(ch);
				while (ss >> temp)
				{
					s.insert(temp);
				}
			}
		}
	}
	vector<string>v(s.begin(), s.end());
	sort(v.begin(), v.end());
	int max = 0, j = 0;
	for (int i = 0; i < v.size(); i++)
	{
		if (v[i].size() > max)
		{
			max = v[i].size();
			j = i;
		}
	}
	cout << v[j] << endl;
	v.clear(), s.clear();

}