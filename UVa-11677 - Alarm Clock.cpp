#include<bits/stdc++.h>
using namespace std;
int main()
{
	int H1, M1, H2, M2;
	while (cin >> H1 >> M1 >> H2 >> M2)
	{
		if (H1 == 0 && H2 == 0 && M1 == 0 && M2 == 0)
		{
			break;
		}
		else if (H1 > H2)
		{
			if (M1 > M2)
			{
				int temp = (60 + M2 - M1) + (60 * (24 + H2 - H1 - 1));
				cout << temp << '\n';
			}
			else
			{
				int temp = (60 * (24 + H2 - H1)) + (M2 - M1);
				cout << temp << '\n';
			}
		}
		else
		{
			if (M1 > M2 && H1 == H2)
			{
				int temp = (M2 + 60 - M1) + (60 * (24 + H2 - H1 - 1));
				cout << temp << '\n';
			}
			else if (M1 == M2 && H1 == H2)
			{
				cout << "0\n";
			}
			else if (M1 == M2 && H2 > H1)
			{
				int temp = (M2 - M1) + (60 * (H2 - H1));
				cout << temp << '\n';
			}
			else if (M1 > M2 && H2 > H1)
			{
				int temp = (M2 + 60 - M1) + (60 * (H2 - H1 - 1));
				cout << temp << '\n';
			}
			else if (M2 > M1 && H2 >= H1)
			{
				int temp = (M2 - M1) + (60 * (H2 - H1));
				cout << temp << '\n';
			}
		}
	}
}