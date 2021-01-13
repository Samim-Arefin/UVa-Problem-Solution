#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int t,ans=0;
	double num, temp = 0;
	cin >> t;
	while (t--)
	{
		cin >> num;
		for (int i = 1; i <= num; i++)
		{
			temp += log10(i);
		}
		ans = floor(temp) + 1;
		cout << ans << endl;
		ans = 0;
		temp = 0;
	}
}