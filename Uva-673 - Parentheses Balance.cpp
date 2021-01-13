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
	int t;
	cin >> t;
	cin.ignore();
	while (t--)
	{
		stack<char> st;
		string str;
		getline(cin, str);
		if (str != " ")
		{
			for (int i = 0; i < str.size(); i++)
			{
				if (!st.empty() && st.top() == '(' && str[i] == ')')
				{
					st.pop();
				}
				else if (!st.empty() && st.top() == '[' && str[i] == ']')
				{
					st.pop();
				}
				else
				{
					st.push(str[i]);
				}
			}
			if (st.empty())
			{
				cout << "Yes" << endl;
			}
			else
			{
				cout << "No" << endl;
			}
		}
		else
		{
			cout << "Yes" << endl;
		}

	}

}
