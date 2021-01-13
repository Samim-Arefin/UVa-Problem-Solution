#include<iostream>
#include<string>
using namespace std;
int main()
{
	int t, M, A, R, G, I, T, count;
	cin >> t;
	string str;
	while (t--)
	{
		M = A = R = G = I = T = count = 0;
		cin >> str;
		for (int i = 0; str[i] != '\0'; i++)
		{
			if (str[i] == 'M')
			{
				M++;
			}
			if (str[i] == 'A')
			{
				A++;
			}
			if (str[i] == 'R')
			{
				R++;
			}
			if (str[i] == 'G')
			{
				G++;
			}
			if (str[i] == 'I')
			{
				I++;
			}
			if (str[i] == 'T')
			{
				T++;
			}
		}
		while ((R > 1) && (A > 2) && (M > 0) && (G > 0) && (I > 0) && (T > 0))
		{
			count++;
			R -= 2;
			A -= 3;
			M -= 1;
			G -= 1;
			I -= 1;
			T -= 1;
		}
		cout << count << endl;
	}
}