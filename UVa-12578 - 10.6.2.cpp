#include<iostream>
#include<math.h>
#include<cstdio>
#define pi acos(-1.0)
using namespace std;
int main(){
    double l,r,area;
    int T;
    cin>>T;
    while(T--){
        cin>>l;
        area=((6.0/10)*l)*l;
        r=l/5.0;
        r=(r*r)*pi;
        printf("%.2lf %.2lf\n",r,(area-r));
    }return 0;
}

