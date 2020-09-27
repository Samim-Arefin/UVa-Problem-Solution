#include<iostream>
#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    char ch[30];
    while(scanf("%s",ch)!=EOF)
    {
      for(int i=0;ch[i]!='\0';i++)
        {
        if(ch[i]=='A' || ch[i]=='B' || ch[i]=='C')
            cout<<"2";
        if(ch[i]=='D' || ch[i]=='E' || ch[i]=='F')
            cout<<"3";
        if(ch[i]=='G' || ch[i]=='H' || ch[i]=='I')
            cout<<"4";
        if(ch[i]=='J' || ch[i]=='K' || ch[i]=='L')
            cout<<"5";
        if(ch[i]=='M' || ch[i]=='N' || ch[i]=='O')
            cout<<"6";
        if(ch[i]=='P' || ch[i]=='Q' || ch[i]=='R' || ch[i]=='S')
            cout<<"7";
        if(ch[i]=='T' || ch[i]=='U' || ch[i]=='V')
            cout<<"8";
        if(ch[i]=='W' || ch[i]=='X' || ch[i]=='Y' || ch[i]=='Z')
            cout<<"9";
        if(ch[i]=='0')
            cout<<"0";
        if(ch[i]=='1')
            cout<<"1";
        if(ch[i]=='2')
            cout<<"2";
        if(ch[i]=='3')
            cout<<"3";
        if(ch[i]=='4')
            cout<<"4";
        if(ch[i]=='5')
            cout<<"5";
        if(ch[i]=='6')
            cout<<"6";
        if(ch[i]=='7')
            cout<<"7";
        if(ch[i]=='8')
            cout<<"8";
        if(ch[i]=='9')
            cout<<"9";
        if(ch[i]=='-')
            cout<<"-";
      }
      cout<<endl;
    }
    return 0;
}
