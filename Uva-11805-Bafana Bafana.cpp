#include<iostream>
using namespace std;
int main()
{
	int t;
	cin >> t;
	for (int i = 1; i <= t; i++)
	{
		int a, b, c;
		cin >> a >> b >> c;
		int k = 0;
		if (((b + c) % a) == 0)
		{
			k = a;
		}
		else
		{
			k = (b + c) % a;
		}
		cout << "Case " << i << ": " << k << endl;
	}
}