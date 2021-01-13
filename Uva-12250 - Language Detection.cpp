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
            if(str=="HELLO")
            {
            cout<<"Case "<<++count<<": "<<"ENGLISH"<<endl;
            }
            else if(str=="HOLA")
            {
            cout<<"Case "<<++count<<": "<<"SPANISH"<<endl;
            }
            else if(str=="HALLO")
            {
            cout<<"Case "<<++count<<": "<<"GERMAN"<<endl;
            }
            else if(str=="BONJOUR")
            {
            cout<<"Case "<<++count<<": "<<"FRENCH"<<endl;
            }
            else if(str=="CIAO")
            {
            cout<<"Case "<<++count<<": "<<"ITALIAN"<<endl;
            }
            else if(str=="ZDRAVSTVUJTE")
            {
            cout<<"Case "<<++count<<": "<<"RUSSIAN"<<endl;
            }
            else if(str=="#")
            {
                break;
            }
            else
            {
                cout<<"Case "<<++count<<": "<<"UNKNOWN"<<endl;
            }
        }
        return 0;
}
