#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    while(cin>>num && num>0)
    {
        if(num>100)
        {
            cout<<"f91("<<num<<") = "<<(num-10)<<endl;
        }
        else
        {
            cout<<"f91("<<num<<") = 91"<<endl;
        }
    }
    return 0;
}
