#include<bits/stdc++.h>
#include<cstdio>
#include<string>
using namespace std;
int main()
{
    string ch;
    int t,count,j=0;
    cin>>t;
    getline(cin,ch);
    while(t--)
 {
     count=0;
     getline(cin,ch);
    for(int i=0;ch[i]!='\0';i++)
     {
         if(ch[i]=='a' || ch[i]=='d' || ch[i]=='g' || ch[i]=='j' || ch[i]=='m' || ch[i]=='p' || ch[i]=='t' || ch[i]=='w' )
         {
             count+=1;
         }
         if(ch[i]=='b' || ch[i]=='e' || ch[i]=='h' || ch[i]=='k' || ch[i]=='n' || ch[i]=='q' || ch[i]=='u' || ch[i]=='x' )
         {
             count+=2;
         }
         if(ch[i]=='c' || ch[i]=='f' || ch[i]=='i' || ch[i]=='l' || ch[i]=='o' || ch[i]=='r' || ch[i]=='v' || ch[i]=='y' )
         {
             count+=3;
         }
         if(ch[i]=='s'|| ch[i]=='z')
         {
             count+=4;
         }
         if(ch[i]==' ')
         {
             count+=1;
         }
     }
     cout<<"Case #"<<++j<<": "<<count<<endl;
 }
 return 0;
}

