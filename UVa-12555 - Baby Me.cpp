#include<bits/stdc++.h>
#include<string>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
 string str;
 int t,a,count=0;
 float res=0;
 cin>>t;
 getline(cin,str);
 while(t--)
 {
    cin>>a;
    getline(cin,str);
     if(str.length()>4)
     {
         res=((str[3]-'0')*0.05)+(a*0.5);
         cout<<"Case "<<++count<<": "<<res<<endl;
     }
     else
     {
         res=(a*0.5);
         cout<<"Case "<<++count<<": "<<res<<endl;
     }
 }
 return 0;
}
