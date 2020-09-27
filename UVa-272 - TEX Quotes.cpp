#include<bits/stdc++.h>
#include<string>
#include<cstring>
using namespace std;
int main()
{
    int k=0;
    string str;
    while(getline(cin,str))
    {
        for(int i=0;str[i]!='\0';i++)
        {
            if(str[i]=='"' && k%2==0)
            {
                cout<<"``";
                ++k;
            }
           else if(str[i]=='"' && k%2==1)
            {
                cout<<"''";
                ++k;
            }
            else
            {
                cout<<str[i];
            }
        }cout<<endl;
    }
    return 0;
}
