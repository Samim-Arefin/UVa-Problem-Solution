#include<bits/stdc++.h>
#define Max 1000001
std::bitset<Max> arr;
void sieve()
{
    arr[0]=true;
    arr[1]=true;
    for(int i=4; i<Max; i+=2)
    {
        arr[i]=true;
    }
    for(int i=3; i*i<Max; i+=2)
    {
        if(arr[i]==false)
        {
            for(int j=i*i; j<Max; j+=i+i)
            {
                arr[j]=true;
            }
        }
    }
}

bool cmp(std::pair<int,int>p1,std::pair<int,int>p2)
{
    if(p1.second<p2.second)
    {
        return true;
    }
    else if(p1.second>p2.second)
    {
        return false;
    }
}

int main()
{
    sieve();
    freopen ("input.txt","r",stdin);
    freopen ("output.txt","w",stdout);
    int test;
    std::cin>>test;
    while(test--)
    {
        int low,high;
        std::cin>>low>>high;
        std::vector<int>v1;
        std::map<int,int>mp;
        for(int i=low; i<=high; i++)
        {
            if(arr[i]==false)
            {
                v1.push_back(i);
            }
        }
        if(v1.size()<2)
        {
            std::cout<<"No jumping champion"<<'\n';
        }
        else
        {
            for(int i=0; i<v1.size()-1; i++)
            {
                mp[v1[i+1]-v1[i]]++;
            }
            int count=0,maximum=0,num;
            std::vector<std::pair<int,int>>v2(mp.begin(),mp.end());
            sort(v2.begin(),v2.end(),cmp);
            reverse(v2.begin(),v2.end());

            for(int i=0; i<v2.size(); i++)
            {
                if(v2[i].second>=maximum)
                {
                    maximum=v2[i].second;
                    num=v2[i].first;
                    count++;
                }
            }
            if(count>1)
            {
                std::cout<<"No jumping champion"<<'\n';
            }
            else
            {
                std::cout<<"The jumping champion is "<<num<<'\n';
            }
        }

    }
}

