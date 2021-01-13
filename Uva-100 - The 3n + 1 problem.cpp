#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int a, b, x, y, c, t_c = 0, n;
	while (cin >> a >> b)
	{
		if (a > b)
		{
			x = b;
			y = a;
		}
		else if (b > a)
		{
			x = a;
			y = b;
		}
		for (int i = x; i < y; i++)
		{
			c = 1;
			n = i;
			while (n > 1)
			{
				if (n % 2 == 1)
				{
					n = 3 * n + 1;
					c++;
				}
				else
				{
				n = n / 2;
				c++;
				}
			}
			if (c > t_c)
			{
				t_c = c;
			}
		}
		cout << a << " " << b << " " << t_c << endl;
		t_c = 0;
	}
}

