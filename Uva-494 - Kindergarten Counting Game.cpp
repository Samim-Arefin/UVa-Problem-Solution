#include<iostream>
#include<string>
#include<cstring>
#include<cstdio>
using namespace std;
int main()
{
	int count = 0,k=0;
	string str;
	while (getline(cin, str))
	{
		for (int i = 0; i<str.length(); i++)
		{
			if ((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
			{
				k = 1;
			}
			else
			{
				count += k;
				k = 0;
			}
		}
		cout << count << endl;
		count = 0;
	}
}
