#include<iostream>
using namespace std;
int main()
{
	long long num, count = 0, len = 0, arr[50];
	while ((cin >> num) && (num>0))
	{
		for (int i = 0; num!=0; i++)
		{
			arr[i] = num % 2;
			num /= 2;
			len++;
		}
		cout << "The parity of ";
		for (int i = len-1; i>= 0; i--)
		{
			cout << arr[i] ;
			if (arr[i] != 0)
			{
				count++;
			}
		}
		cout <<" is "<<count<<" (mod 2)."<< endl;
		count = 0;
		len = 0;
	}
	return 0;
}