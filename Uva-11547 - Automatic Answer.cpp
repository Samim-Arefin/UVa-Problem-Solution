#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main()
{
    int t,num,ans;
    cin>>t;
    while(t--)
    {
        cin>>num;
        ans=(num*567/9+7492)*235/47-498;
        ans=(ans%100)/10;
        cout<<abs(ans)<<endl;
    }

    return 0;
}
