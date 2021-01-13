#include<bits/stdc++.h>
using namespace std;
int main()
{
	string str;
	while (getline(cin, str))
	{
		list<char> l1;
		list<char>::iterator it = l1.begin();
		for (int i = 0; i < str.size(); i++)
		{
			if (str[i] == '[')
			{
				it = l1.begin();
			}
			else if (str[i] == ']')
			{
				it = l1.end();
			}
			else
			{
				l1.insert(it, str[i]);
			}
		}
		for (auto it = l1.begin(); it != l1.end(); it++)
		{
			cout << *it;
		}
		cout << '\n';
		l1.clear();
	}

}