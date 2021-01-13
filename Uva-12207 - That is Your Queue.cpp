#include<bits/stdc++.h>
using namespace std;
int main()
{
	int p, c;
	static int i = 0;
	while (cin >> p >> c, (p > 0 && c > 0))
	{
		cout << "Case " << ++i<<":" << endl;
		list<int> l1;
		for (int i = 1; i <=min(c,p); i++)
		{
			l1.push_back(i);
		}
		for (int i = 1; i <= c; i++)
		{
			char ch;
			cin >> ch;
			if (ch == 'N')
			{
				cout << l1.front() << endl;
				l1.push_back(l1.front());
				l1.pop_front();
			}
			else if(ch=='E')
			{
				int num;
				cin >> num;
				l1.remove(num);
				l1.push_front(num);
			}
		}
	}
}