#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long num,sum;
    while(cin>>num && num>=0)
    {
        sum=0;
        for(int i=1;i<=num;i++)
        {
            sum+=i;
        }
        sum++;
        cout<<sum<<endl;
    }
    return 0;
}
