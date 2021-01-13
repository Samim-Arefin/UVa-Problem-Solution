#include<bits/stdc++.h>
using namespace std;
int main()
{
	int num;
	while (cin >> num)
	{
		vector<int> v1;
		for (int i=0;i<num;i++)
		{
			int temp;
			cin >> temp;
			v1.push_back(temp);
		}
		sort(v1.begin(), v1.end());
		int q;
		cin >> q;
		while (q--)
		{
			int a;
			cin >> a ;
			vector<int>::iterator low, high;
			 low=lower_bound(v1.begin(), v1.end(), a);
			 int min = (low - v1.begin());
			 if (min==0)
			 {
				 cout << "X ";
			 }
			 else
			 {
				 cout << v1[min - 1] << " ";
			 }
			 high = upper_bound(v1.begin(), v1.end(), a);
			 int max = (high - v1.begin());
			 if (max == num)
			 {
				 cout << "X\n";
			 }
			 else
			 {
				 cout <<v1[max] << '\n';
			 }
		}
	}
}