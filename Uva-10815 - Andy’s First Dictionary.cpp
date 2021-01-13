#include<iostream>
#include<string>
#include<vector>
#include<set>
#include<algorithm>
#include<sstream>
using namespace std;
set<string> st;
set<string>::iterator it;
int main()
{
	string str, ch;
	while (cin >> str)
	{
		for (int i = 0; i < str.length(); i++)
		{
			if (isalpha(str[i]))
			{
				str[i] = tolower(str[i]);
			}
			else
			{
				str[i] = ' ';
			}
		}
		stringstream ss(str);
		while (ss >> ch)
		{
			st.insert(ch);
		}
	}
	for (it= st.begin(); it != st.end(); it++)
	{
		cout << *it << endl;
	}

}