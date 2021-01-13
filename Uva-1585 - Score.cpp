
#include<bits/stdc++.h>
#include<cstring>
#include<string>
using namespace std;
int main()
{
    string str;
    int t,count,sum=0;
    cin>>t;
    while(t--)
    {
        cin>>str;
        count=0;
        sum=0;
        for(int i=0;str[i]!='\0';i++)
        {
            if(str[i]=='O')
            {
            count++;
            sum+=count;
            }
            else if(str[i]=='X')
            {
                count=0;
            }
        }
        cout<<sum<<endl;
    }
}
