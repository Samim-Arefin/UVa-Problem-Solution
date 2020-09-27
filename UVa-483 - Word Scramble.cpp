#include<bits/stdc++.h>
using namespace std;
int main()
{
	string str;
	while (getline(cin, str))
	{
		string temp=" ";
		vector<string> v1;
		for (int i = 0; i < str.size(); i++)
		{
			if (str[i] != ' ')
			{
				temp += str[i];
			}
			else
			{
				reverse(temp.begin(), temp.end());
				v1.push_back(temp);
				temp.clear();
			}
		}
		reverse(temp.begin(), temp.end());
		v1.push_back(temp);
		for (int i = 0; i < v1.size(); i++)
		{
			cout << v1[i];
			if (i != (v1.size()-2))
			{
				cout << " ";
			}
		}
		cout << '\n';
	}
}