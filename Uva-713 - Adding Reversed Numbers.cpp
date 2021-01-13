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
string add(string a, string b)
{
	int carry = 0;
	string temp;
	if (a.size() > b.size())
	{
		for (int i = 0; i < b.size(); i++)
		{
			int sum = a[i] - '0' + b[i] - '0' + carry;
			temp.push_back((sum % 10) + '0');
			carry = sum / 10;
		}
		for (int i = b.size(); i < a.size(); i++)
		{
			int sum = a[i] - '0' + carry;
			temp.push_back((sum % 10) + '0');
			carry = sum / 10;
		}
		if (carry > 0)
		{
			temp.push_back(carry + '0');
		}
		return temp;
	}
	else
	{
		for (int i = 0; i < a.size(); i++)
		{
			int sum = a[i] - '0' + b[i] - '0' + carry;
			temp.push_back((sum % 10) + '0');
			carry = sum / 10;
		}
		for (int i = a.size(); i < b.size(); i++)
		{
			int sum = b[i] - '0' + carry;
			temp.push_back((sum % 10) + '0');
			carry = sum / 10;
		}
		if (carry > 0)
		{
			temp.push_back(carry + '0');
		}
		return temp;
	}

}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		string str, ch, sum;
		cin >> str >> ch;
		sum = add(str, ch);
		int count = 0;
		for (int i = 0; i < sum.size(); i++)
		{
			if (sum[i] == '0' && count == 0)
			{
				continue;
			}
			else
			{
				count = 1;
				cout << sum[i];
			}
		}
		cout << endl;
	}
}