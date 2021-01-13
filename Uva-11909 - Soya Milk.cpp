#include<bits/stdc++.h>
#include<iomanip>
#include<math.h>
#define pi acos(-1.0)
using namespace std;
int main()
{
    int height,length,width,angle;
    double dis=0,vol=0,vol2=0;
    while(cin>>length>>width>>height>>angle)
    {
        dis=length*tan(angle*pi/180.0);
        if(dis>height)
        {
            vol=(0.5*height*height*length*width)/dis;
        }
        else
        {
             vol2=0.5*length*dis*width;
              vol=(length*width*height)-vol2;

        }
        cout<<fixed<<setprecision(3)<<vol<<" mL"<<endl;
    }
    return 0;
}
