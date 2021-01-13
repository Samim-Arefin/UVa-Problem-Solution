#include<iostream>
#include<string>
#include<vector>
#include<map>
bool prime[10000];
using namespace std;
int main()
{
	prime[1] = true;
	for (int i = 4; i < 10000; i += 2)
	{
		prime[i] = true;
	}
	for (int i = 3; i * i < 10000; i += 2)
	{
		if (prime[i] == false)
		{
			for (int j = i * i; j < 10000; j = j + i + i)
			{
				prime[j] = true;
			}
		}
	}
	int t;
	cin >> t;
	for (int j = 1; j <= t; j++)
	{
		string ch;
		cin >> ch;
		map<char, int>str;
		map<char, int>::iterator it;
		for (int i = 0; i < ch.size(); i++)
		{
			str[ch[i]]++;
		}
		bool check = false;
		int temp;
		cout << "Case " << j << ": ";
		for (it = str.begin(); it != str.end(); it++)
		{
			temp = it->second;
			if (prime[temp] == false)
			{
				cout << it->first;
				check = true;
			}
		}
		if (check == true)
		{
			cout << endl;
		}
		else if(check==false)
		{
			cout <<"empty" << endl;
		}
	}
	
}