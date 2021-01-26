#include<bits/stdc++.h>
struct Trie{
    bool isEnd;
    std::unordered_map<char,Trie*>map;
};

Trie* CreateNode()
{
    Trie* Node=new Trie;
    Node->isEnd=false;
    return Node;
}

bool insert(Trie*& root,std::string str)
{
    if(root==nullptr)
    {
        root=CreateNode();
    }
    Trie* Curr=root;
    bool check=false;
    for(auto it:str)
    {
        if(Curr->map.find(it)==Curr->map.end())
        {
            Curr->map[it]=CreateNode();
        }
        if(Curr->isEnd==true)
        {
            return Curr->isEnd;
        }
        Curr=Curr->map[it];
    }
    Curr->isEnd=true;
    return check;
}

bool search(Trie *root,std::string str)
{
    Trie *Curr=root;
    for(auto it:str)
    {
        if(Curr->map.find(it)==Curr->map.end())
        {
            return false;
        }
        Curr=Curr->map[it];
    }
    return Curr->isEnd;
}

void deleteTrie(Trie* root)
{
	if (root==nullptr)
    {
        return;
    }

	for (auto it = root->map.begin(); it != root->map.end(); it++)
    {
		deleteTrie(it->second);
	}
	delete root;
	root = nullptr;
}

bool cmp(std::string a,std::string b)
{
    if(a.size()<b.size())
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int test;
  //freopen("input.txt","r",stdin);
  //freopen("output.txt","w",stdout);
    std::cin>>test;
    while(test--)
    {
        Trie* root=nullptr;
        int num;
        std::cin>>num;
        std::vector<std::string>v1;
        while(num--)
        {
            std::string str;
            std::cin>>str;
            v1.push_back(str);
        }

        bool flag=false;
        sort(v1.begin(),v1.end(),cmp);
        for(auto str:v1)
        {
            if(insert(root,str))
            {
                flag=true;
                break;
            }
        }
        if(flag==true)
        {
            std::cout<<"NO\n";
        }
        else
        {
            std::cout<<"YES\n";
        }
        deleteTrie(root);
    }

}

