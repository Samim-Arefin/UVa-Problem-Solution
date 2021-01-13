#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int t, num,temp=0,count=0;
	cin >> t;
	while (t--)
	{
		cin >> num;
		temp = num / 2;
		int arr[num];
		for (int i = 0; i < num; i++)
		{
			cin >> arr[i];
		}
		cout << "Case " << ++count << ": " << arr[temp] << endl;
		temp = 0;
	}
}