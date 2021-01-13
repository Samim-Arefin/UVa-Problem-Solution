#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;
int main()
{
	int t, arr[10],k=0,m=0,n=0,count=0;
	cin >> t;
	while (t--)
	{
		for (int i = 0; i < 10; i++)
		{
			cin >> arr[i];
		}
		for (int i = 0; i < 10; i++)
		{
			if (arr[i] < arr[i + 1])
			{
				k++;
			}
			if (arr[i] > arr[i + 1])
			{
				m++;
			}
			if (arr[i+1] == arr[i])
			{
				n++;
			}
		}
		if (count == 0)
		{
			cout << "Lumberjacks:" << endl;;
		}
		if (k == 9)
		{
			cout << "Ordered" << endl;
		}
		if (m == 10)
		{
			cout << "Ordered" << endl;
		}
		if (n == 9)
		{
			cout << "Unordered" << endl;
		}
		else if((k!=9) && (m!=10))
		{
			cout << "Unordered" << endl;
		}
		k = n = m = 0;
		count++;
	}
}