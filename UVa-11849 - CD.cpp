#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    while (cin >> n >> m,(n>0 && m>0))
    {
        vector<long long> v1;
        map<long long,long long> mp;
        map<long long, long long>::iterator it;
        int count = 0;
        for (int i = 0; i < n+m; i++)
        {
            int temp;
            cin >> temp;
            v1.push_back(temp);
        }
        sort(v1.begin(), v1.end());
        for (int j=0;j<(n+m);j++)
        {
            mp[v1[j]]++;
        }
        for (it = mp.begin(); it != mp.end(); it++)
        {
            int com = ((*it).second);
            if ( com> 1)
            {
                count++;
            }
        }
        cout<< count<< endl;
    }
}