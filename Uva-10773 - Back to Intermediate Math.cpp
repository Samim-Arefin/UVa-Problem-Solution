#include<bits/stdc++.h>

using namespace std;
int main()
{
    long long t,i,j;
    double t1,t2,t3,u,v,d;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        cin>>d>>v>>u;
        {
            if(v>=u)
                cout<<"Case "<<i<<": "<<"can't determine\n";
            else
            {
                t1=(d/u);
                t2=(d/(sqrt(u*u-v*v)));
                t3=t2-t1;
                if(t3<=0)
                    cout<<"Case "<<i<<": "<<"can't determine\n";
                else
                   {
                          cout<<"Case "<<i<<": ";
                cout<<fixed<<setprecision(3)<<t3<<endl;
            }
        }
    }

  }
    return 0;
}
