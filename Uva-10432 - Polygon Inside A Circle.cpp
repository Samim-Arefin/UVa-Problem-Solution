#include<iostream>
#include<math.h>
#include<iomanip>
#define pi acos(-1)
using namespace std;
int main(){

    double radius,num;
    while(cin>>radius>>num)
	{
        cout<<fixed<<setprecision(3)<<((.5*(num*(radius*radius)))*sin(2.0*pi/num))<<endl;
    }
    return 0;
}
