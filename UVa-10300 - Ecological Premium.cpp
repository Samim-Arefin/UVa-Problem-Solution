#include<iostream>
using namespace std;
int main()
{
	int t,num;
	cin >> t;
	while (t--)
	{
		cin >> num;
		long long x, y, z, sum = 0;
		for (int i = 1; i <= num; i++)
		{
			cin >> x >> y >> z;
			sum+=x*z;
		}
		cout << sum << endl;
	}
	return 0;
}