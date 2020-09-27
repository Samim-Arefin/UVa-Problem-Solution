#include<bits/stdc++.h>
using namespace std;
int main()
{
	string str, ch;
	while (getline(cin,str))
	{
		if (str == "DONE")
		{
			break;
		}
		else
		{
			string temp;
			for (int i = 0; i < str.size(); i++)
			{
				if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
				{
					if (str[i] >= 'a' && str[i] <= 'z')
					{
						temp += str[i];
					}
					else
					{
						temp += str[i] + 32;
					}
				}
			}
			ch = temp;
			reverse(temp.begin(), temp.end());
			if (temp == ch)
			{
				cout << "You won't be eaten!\n";
			}
			else
			{
				cout << "Uh oh..\n";
			}
			ch.clear();
			temp.clear();
		}
	}
}