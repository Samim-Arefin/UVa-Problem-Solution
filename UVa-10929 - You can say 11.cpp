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
	string str;
	while (getline(cin,str))
	{
		long long rem = 0;
		if (str == "0")
		{
			break;
		}
		else
		{
			for (int i = 0; i < str.size(); i++)
			{
				rem = ((rem * 10) + (str[i] - '0')) % 11;
			}
			if (rem == 0)
			{
				cout << str << " is a multiple of 11." << endl;
			}
			else
			{
				cout << str << " is not a multiple of 11." << endl;
			}
		}
		str.clear();
	}
}