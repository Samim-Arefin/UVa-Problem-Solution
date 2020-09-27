#include<bits/stdc++.h>
#include<cstring>
#include<string>
using namespace std;
int main()
{
    int t,len;
    string str;
    cin>>t;
    while(t--)
    {
        cin>>str;
        len=str.length();
        if(str=="1" || str=="4" || str=="78")
        {
            cout<<"+"<<endl;
        }
        else if(str[0]=='9' && str[len-1]=='4')
        {
            cout<<"*"<<endl;
        }
        else if(str[len-2]=='3' && str[len-1]=='5')
        {
            cout<<"-"<<endl;
        }
        else
        {
            cout<<"?"<<endl;
        }
    }
    return 0;
}
