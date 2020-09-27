#include<bits/stdc++.h>
#include<cstdio>
#include<cstring>
#include<string>
using namespace std;
int main()
{
    string str;
    int len=0,t;
    cin>>t;
    while(t--)
    {
        cin>>str;
        len=str.length();
        if((str[0]=='o'&& str[1]=='n')||(str[0]=='o' &&str[2]=='e') || (str[1]=='n'&&str[2]=='e'))
        {
            cout<<"1"<<endl;
        }
        else if((str[0]=='t'&& str[1]=='w') || (str[0]=='t' && str[2]=='o') || (str[1]=='w'&&str[2]=='o'))
        {
            cout<<"2"<<endl;
        }
        else if(len>=5)
        {
            cout<<"3"<<endl;
        }
    }
    return 0;
}
