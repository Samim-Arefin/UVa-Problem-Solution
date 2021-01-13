#include<iostream>
using namespace std;
int main()
{
    int T,N,n,max;
    cin>>T;
    for(int i=1;i<=T;i++){
        max=-1;
        cin>>N;
        while(N--){
            cin>>n;
            if(max<n){
                max=n;
            }
        }cout<<"Case "<<i<<": "<<max<<endl;
    }return 0;
}
