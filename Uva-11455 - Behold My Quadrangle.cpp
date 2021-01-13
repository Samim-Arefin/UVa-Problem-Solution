#include<iostream>
using namespace std;
int main()
{
	int t, a, b, c, d;
	cin >> t;
	while (t--)
	{
		cin >> a >> b >> c >> d;
		if (a == b && c == d && a==c && b==d)
		{
			cout << "square" << endl;
		}
		else if ((a == c && b == d) || (a == b && c == d) || (a == d && b == c))
		{
			cout << "rectangle" << endl;
		}
		else if ((b + c + d >= a) && (c + d + a >= b) && (d + a + b >= c) && (a + b + c >= d))
		{
			cout << "quadrangle" << endl;
		}
		else
		{
			cout << "banana" << endl;
		}
	}
}