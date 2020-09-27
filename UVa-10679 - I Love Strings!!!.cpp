#include<bits/stdc++.h>
using namespace std;
vector<int> pre(string pattern)
{
	int index = 0;
	vector<int> lps(pattern.length());
	for (int i = 1; i < pattern.size();)
	{
		if (pattern[index] == pattern[i])
		{
			lps[i] = index + 1;
			i++, index++;
		}
		else
		{
			if (index != 0)
			{
				index = lps[index - 1];
			}
			else
			{
				lps[i] = index;
				i++;
			}
		}
	}
	return vector<int>(lps.begin(), lps.end());
}
bool KMP(string text, string pattern)
{
	bool flag = 0;
	int i = 0, j = 0;
	vector<int>lps(pre(pattern));
	while (i < text.size())
	{
		if (text[i] == pattern[j])
		{
			i++;
			j++;
		}
		else
		{
			if (j != 0)
			{
				j = lps[j - 1];
			}
			else
			{
				i++;
			}
		}
		if (j == pattern.size())
		{
			flag = true;
			return flag;
			j = lps[j - 1];
		}
	}
	return flag;
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		string str;
		cin >> str;
		int q;
		cin >> q;
		while (q--)
		{
			string ch;
			cin >> ch;
			if (KMP(str,ch))
			{
				cout << "y\n";
			}
			else
			{
				cout << "n\n";
			}
		}
	}
}