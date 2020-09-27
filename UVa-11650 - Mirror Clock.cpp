#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int H, M;
		char ch;
		cin >> H >> ch >> M;
		if (H == 12 && M == 0)
		{
			cout << "12:00\n";
		}
		else if (H == 12 && M > 0)
		{
		    if (60 - M > 9)
			{
					cout << 12 - 1 << ':' << 60 - M << '\n';
			}
			else
			{
				cout << 12 - 1 << ":0" << 60 - M << '\n';
			}
		}
		else if (H == 11 && M == 0)
		{
			cout << "01:00\n";
		}
		else if (H == 11 && M > 0)
		{
			if (60 - M > 9)
			{
				cout << 12  << ':' << 60 - M << '\n';
			}
			else
			{
				cout << 12  << ":0" << 60 - M << '\n';
			}
		}
		else
		{
			if (M == 0)
			{
				if (abs(12 - H ) > 9)
				{
					cout << abs(12 - H) << ":00" << '\n';
				}
				else
				{
					cout << '0' << abs(12 - H) << ":00"<< '\n';
				}
			}
			else
			{
				if (60 - M > 9)
				{
					if (abs(12 - H - 1) > 9)
					{
						cout << abs(12 - H - 1) << ':' << 60 - M << '\n';
					}
					else
					{
						cout << '0' << abs(12 - H - 1) << ':' << 60 - M << '\n';
					}
				}
				else
				{
					if (abs(12 - H - 1) > 9)
					{
						cout << abs(12 - H - 1) << ":0" << 60 - M << '\n';
					}
					else
					{
						cout << '0' << abs(12 - H - 1) << ":0" << 60 - M << '\n';
					}
				}
			}
		}
	}
}














