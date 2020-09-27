#include <bits/stdc++.h>
#include<iomanip>
using namespace std;
int main()
{
    double x1,x2,y1,y2,c1,c2,x,y;
    while(cin>>x1>>y1>>c1>>x2>>y2>>c2)
    {
        if(x1==0 && x2==0 && y1==0 && y2==0 && c1==0 && c2==0)
        {
            break;
        }
        else if(x1*y2==x2*y1 || y1*x2==y2)
        {
            cout<<"No fixed point exists."<<endl;
        }
        else
        {
            x=(((c1*y2)-(c2*y1))/((x1*y2)-(x2*y1)));
            y=(((c1*x2)-(c2*x1))/((y1*x2)-(y2*x1)));
            cout<<"The fixed point is at "<<fixed<<setprecision(2)<<x<<" "<<y<<"."<<endl;;
        }
    }
    return 0;
}
