#include<iostream>
#include<algorithm>
int arr[100000];
using namespace std;
int main()
{
	int num;
	while ((cin >> num) && (num > 0))
	{
		for (int i = 0; i < num; i++)
		{
			cin >> arr[i];
		}
		sort(arr, arr + num);
		for (int i = 0; i < num; i++)
		{
			cout << arr[i];
			if (i + 1 < num)
			{
				cout << " ";
			}

		}
		cout << endl;

	}
	return 0;
}