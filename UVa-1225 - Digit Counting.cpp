#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int t, count[10],num;
	cin >> t;
	while (t--)
	{
		cin >>num;
		for (int i = 0; i < 10; i++)
		{
			count[i] = 0;
		}
		for (int i = 1; i <= num; i++)
		{
			int temp = i;
			while (temp != 0)
			{
				count[temp % 10]++;
				temp /= 10;
			}
		}
		for (int i = 0; i < 10; i++)
		{
			cout << count[i];
			if (i + 1 < 10)
			{
				cout << " ";
			}
		}
		cout << endl;
	}

}
