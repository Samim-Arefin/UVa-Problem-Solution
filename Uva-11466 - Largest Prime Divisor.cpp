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
	long long num;
	while (cin >> num)
	{
		if (num == 0)
		{
			break;
		}
		else
		{
			num = fabs(num);
			int count = 0;
			set<unsigned long long>s;
			for (long long i = 2; i * i <= num && num != 1; i++)
			{
				while (num % i == 0)
				{
					num /= i;
					s.insert(i);
				}
				count++;
			}
			if (num > 1 && count)
			{
				s.insert(num);
			}
			vector<unsigned long long> v(s.begin(), s.end());
			if (v.size() == 0 || v.size() == 1)
			{
				cout << "-1" << endl;
			}
			else
			{
				cout << *max_element(v.begin(), v.end()) << endl;
			}
			s.clear(), v.clear();
		}

	}
}