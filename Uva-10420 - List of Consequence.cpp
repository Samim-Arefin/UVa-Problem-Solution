#include<iostream>
#include<string>
#include<map>
using namespace std;
int main()
{
	int test;
	map<string, int>mp;
	map<string, int>::iterator it;
	while (cin>>test)
	{
		while (test--)
		{
			string ch, str;
			cin >> ch;
			cin.ignore();
			getline(cin, str);
			mp[ch]++;
		}
		for (it = mp.begin(); it != mp.end(); it++)
		{
			cout << it->first << " " << it->second << endl;
		}
	}
}