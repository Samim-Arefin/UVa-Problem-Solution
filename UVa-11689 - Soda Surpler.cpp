
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int bottle,found_bottle,k,t,result=0,total;
    cin>>t;
    while(t--)
    {
        result=0;
        cin>>bottle>>found_bottle>>k;
        total=bottle+found_bottle;
        while(total>=k)
        {
            result+=total/k;
            total=total/k+total%k;
        }
        cout<<result<<endl;
    }
    return 0;
}
