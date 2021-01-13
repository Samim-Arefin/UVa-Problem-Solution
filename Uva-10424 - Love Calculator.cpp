#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
int main()
{
	string str, ch;
	while (getline(cin, str), getline(cin, ch))
	{
		int cal = 0, count = 0;
		for (int i = 0; i < str.size(); i++)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				cal += str[i] - 'a' + 1;
			}
			else if (str[i] >= 'A' && str[i] <= 'Z')
			{
				cal += str[i] - 'A' + 1;
			}
		}
		while (cal > 9)
		{
			int sum = 0;
			while (cal > 0)
			{
				sum = sum + cal % 10;
				cal /= 10;
			}
			cal = sum;
		}
		for (int i = 0; i < ch.size(); i++)
		{
			if (ch[i] >= 'a' && ch[i] <= 'z')
			{
				count += ch[i] - 'a' + 1;
			}
			else if (ch[i] >= 'A' && ch[i] <= 'Z')
			{
				count += ch[i] - 'A' + 1;
			}
		}
		while (count > 9)
		{
			int add = 0;
			while (count > 0)
			{
				add = add + count % 10;
				count /= 10;
			}
			count = add;
		}

		if (cal >= count)
		{
			double result = 0;
			result = ((double)count * 100.0) / ((double)cal);
			cout << fixed << setprecision(2) << result << " %" << endl;
		}
		else if (count >= cal)
		{
			double result = 0;
			result = ((double)cal * 100.0) / ((double)count);
			cout << fixed << setprecision(2) << result << " %" << endl;
		}

	}
}


