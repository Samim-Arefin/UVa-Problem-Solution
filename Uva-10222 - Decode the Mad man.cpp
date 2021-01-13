#include<bits/stdc++.h>
#include<string>
#include<cstring>
#include<cstdio>
using namespace std;
int main()
{
    char ch[47]={'q','w','e','r','t','y','u','i','o','p','[',']',92,
                     'a','s','d','f','g','h','j','k','l',';',39,
                     'z','x','c','v','b','n','m',',','.','/',
                     '`','1','2','3','4','5','6','7','8','9','0','-','='};

    string str;
    while(getline(cin,str))
    {
        for(int i=0;i<str.length();i++)
        {
            if(str[i]==' ' || str[i]=='\n')
            {
                cout<<str[i];
            }
            else
            {
            for(int j=1;j<47;j++)
            {
                if(str[i]==ch[j])
                {
                 cout<<ch[j-2];
                 break;
                }
            }
            }
        }
        cout<<endl;
    }
    return 0;
}
