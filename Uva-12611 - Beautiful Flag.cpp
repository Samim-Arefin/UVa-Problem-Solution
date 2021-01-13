#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,r,count=0;
    cin>>t;
    while(t--)
    {
        cin>>r;
        cout<<"Case "<<++count<<":"<<endl;
        cout<<-2.25*r<<" "<<1.5*r<<endl;
        cout<<2.75*r<<" "<<1.5*r<<endl;
        cout<<2.75*r<<" "<<-1.5*r<<endl;
        cout<<-2.25*r<<" "<<-1.5*r<<endl;
    }
    return 0;
}
