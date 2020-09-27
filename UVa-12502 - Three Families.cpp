#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long Tk,B,C;
    int t;
    cin>>t;
    while(t--)
    {
     cin>>B>>C>>Tk;
     cout<<(Tk*(2*B-C))/(B+C)<<endl;
    }
    return 0;
}
