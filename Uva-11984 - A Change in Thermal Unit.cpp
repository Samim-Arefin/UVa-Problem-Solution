#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int t;
    float c,f,ans;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>c>>f;
        ans=((5.0/9.0)*f)+c;
        cout<<"Case "<<i<<": "<<fixed<<setprecision(2)<<ans<<endl;
    }
return 0;
}
