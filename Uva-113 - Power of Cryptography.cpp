#include<bits/stdc++.h>
#include<math.h>
#include<iomanip>
using namespace std;
int main()
{
    double num,power;
    double ans;
    while(cin>>power>>num && (power>=1 && num>=1))
    {
        ans=pow(num,(1.0/power));
        cout<<fixed<<setprecision(0)<<ans<<endl;
    }
    return 0;
}
