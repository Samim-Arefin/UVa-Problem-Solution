#include<iostream>
using namespace std;
int main()
{
	int a, b, c, d, l,count=0;
	while ((cin >> a >> b >> c >> d>>l) && (a >0 || b >0 || c>0 ||  d>0 || l > 0))
	{
		for (int i = 0; i <= l; i++)
		{
			if ((a * i*i + b * i + c) % d == 0)
			{
				count++;
			}
		}
		cout << count << endl;
		count = 0;
	}
}