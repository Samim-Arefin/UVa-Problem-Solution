#include<iostream>
using namespace std;
int main()
{
	int num, result = 0;
	while ((cin >> num) && (num>0))
	{
		while (num > 3)
		{
			result += num / 3;
			num = num / 3 + num % 3;
		}
		if (num == 1)
		{
			cout << "0" << endl;
		}
		if (num >= 2)
		{
			cout << ++result << endl;
		}
		result = 0;
	}
}