#include <bits/stdc++.h>
using namespace std;
long long GCD(long long a,long long b)
{
    if(b==0)
    {
        return a;
    }
    else
    {
        return GCD(b,a%b);
    }
    
}
int main()
{
    long long num;
    vector<long long> v;
    while (cin >> num, num != 0)
    {
        v.push_back(num);
        long long in;
        while (cin >> in, in != 0)
        {
            v.push_back(in);
        }
        vector<long long> v1;
        for (int i = 0; i < v.size()-1; i++)
        {
            long long temp=abs((v[i+1]-v[i]));
            v1.push_back(temp);
        }
        long long result=v1[0];
        for(int i=1;i<v1.size();i++)
        {
            result=GCD(result,v1[i]);
        }
        cout<<result<<endl;
        v1.clear();
        v.clear();
    }
}