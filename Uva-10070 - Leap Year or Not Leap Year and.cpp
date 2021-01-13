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
int year(string a, int num)
{
	int rem = 0;
	for (int i = 0; i < a.size(); i++)
	{
		rem = ((rem * 10) + a[i] - '0') % num;
	}
	if (rem == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}
int main()
{
	string str;
	int count = 0;
	while (cin >> str)
	{
		int leap = 0, bulu = 0, hulu = 0;
		if (count > 0)
		{
			cout << endl;
		}
		count++;
		if (((year(str, 4) == true) && (year(str, 100) != true)) || year(str, 400) == true)
		{
			cout << "This is leap year." << endl;
			leap = 1;
		}
		if (year(str, 15) == true)
		{
			cout << "This is huluculu festival year." << endl;
			hulu = 1;
		}
		if ((year(str, 55) == true) && leap == 1)
		{
			cout << "This is bulukulu festival year." << endl;
			bulu = 1;
		}
		if (leap == 0 && hulu == 0 && bulu == 0)
		{
			cout << "This is an ordinary year." << endl;
		}
		str.clear();
	}
}
