#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int t, len, wid;
	cin >> t;
	while (t--)
	{
		cin >> len >> wid;
		cout << ((len / 3) * (wid / 3)) << endl;
	}
}