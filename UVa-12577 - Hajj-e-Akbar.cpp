#include<bits/stdc++.h>
#include<string>
#include<cstdio>
using namespace std;
int main()
{
    string str;
    int count=0;
    while(getline(cin,str))
    {
        if(str=="Hajj")
        {
        cout<<"Case "<<++count<<": "<<"Hajj-e-Akbar"<<endl;
        }
        else if(str=="Umrah")
        {
        cout<<"Case "<<++count<<": "<<"Hajj-e-Asghar"<<endl;
        }
        else if(str=="*")
        {
            break;
        }
    }
    return 0;
}
