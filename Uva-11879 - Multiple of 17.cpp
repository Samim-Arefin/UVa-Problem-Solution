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
	while (getline(cin, str))
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
				rem = ((rem * 10) + (str[i] - '0')) % 17;
			}
			if (rem == 0)
			{
				cout << "1" << endl;
			}
			else
			{
				cout << "0" << endl;
			}
		}
		str.clear();
	}
}