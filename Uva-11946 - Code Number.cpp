#include<iostream>
#include<string>
using namespace std;
int main()
{
	int t;
	string str,ch;
	cin >> t;
	getline(cin, ch);
	while (getline(cin, str))
	{
		for (int i = 0; str[i] != '\0'; i++)
		{
			if (str[i] == '0')
			{
				str[i] = 'O';
			}
			if (str[i] == '1')
			{
				str[i] = 'I';
			}
			if (str[i] == '2')
			{
				str[i] = 'Z';
			}
			if (str[i] == '3')
			{
				str[i] = 'E';
			}
			if (str[i] == '4')
			{
				str[i] = 'A';
			}
			if (str[i] == '5')
			{
				str[i] = 'S';
			}
			if (str[i] == '6')
			{
				str[i] = 'G';
			}
			if (str[i] == '7')
			{
				str[i] = 'T';
			}
			if (str[i] == '8')
			{
				str[i] = 'B';
			}
			if (str[i] == '9')
			{
				str[i] = 'P';
			}
		}
		cout << str << endl;

	}
}