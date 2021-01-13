#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	for(int i=1;i<=t;i++)
	{
		int size,Mile=0,Juice=0;
		cin >> size;
		for (int i = 0; i < size; i++)
		{
			int num;
			cin >> num;
		    int temp = (num / 30) + 1;
			Mile += temp * 10;
		    int temp2 = (num / 60) + 1;
			Juice += temp2 * 15;
		}
		if (Mile == Juice)
		{
			cout << "Case " << i << ": Mile Juice " << Mile << '\n';
		}
		else if (Mile < Juice)
		{
			cout << "Case " << i << ": Mile " << Mile << '\n';
		}
		else if (Juice < Mile)
		{
			cout << "Case " << i << ": Juice " << Juice << '\n';
		}
	}
}