#include<bits/stdc++.h>
#define Max 1000001
std::bitset<Max> arr;
std::vector<int> prime;

void sieve()
{
    arr[0]=true;
    arr[1]=true;
    for(int i=4;i<=Max;i+=2)
    {
        arr[i]=true;
    }
    for(int i=3;i*i<=Max;i++)
    {
        if(arr[i]==false)
        {
            for(int j=i*i;j<=Max;j+=i+i)
            {
                arr[j]=true;
            }
        }
    }
    prime.push_back(2);
    for(int i=3;i<=Max;i+=2)
    {
        if(arr[i]==false)
        {
            prime.push_back(i);
        }
    }
}

int main()
{
    sieve();
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int num;
    while(std::cin>>num,num>0)
    {
        int beg=0,end=prime.size()-1,maximum=INT_MIN,a,b;
        bool check=false;
        while(beg<=end)
        {
            if((prime[beg]+prime[end])==num)
            {
                if((prime[end]-prime[beg])>maximum)
                {
                    a=prime[beg];
                    b=prime[end];
                    maximum=(prime[end]-prime[beg]);

                    check=true;
                    break;
                }
            }
            else if((prime[beg]+prime[end])<num)
            {
                beg++;
            }
            else
            {
                end--;
            }
        }
        if(check==true)
        {
            std::cout<<num<<":\n"<<a<<"+"<<b<<'\n';
        }
        else
        {
            std::cout<<num<<":\nNO WAY!\n";
        }
    }
}

