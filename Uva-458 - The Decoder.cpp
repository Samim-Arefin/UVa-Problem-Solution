#include<iostream>
using namespace std;
int main()
{
    string str;
    while(getline(cin,str)){
        int i;
        for(i=0;str[i]!='\0';i++){
            str[i]-=7;
        }str[i]='\0';
        cout<<str<<endl;
    }return 0;
}
