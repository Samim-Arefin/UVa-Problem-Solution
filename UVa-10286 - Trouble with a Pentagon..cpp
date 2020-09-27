#include<iostream>
#include<iomanip>
#include<math.h>
#define n 1.0673956817111818692592637626711
using namespace std;
int main()
{
    double num;
    while(cin>>num)
    {
        cout<<fixed<<setprecision(10)<<(num*n)<<endl;
    }
    return 0;
}
