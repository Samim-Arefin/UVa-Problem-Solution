#include <bits/stdc++.h>
using namespace std;
int presedence(char ch)
{
    if (ch == '+' || ch == '-')
    {
        return 1;
    }
    else if (ch == '*' || ch == '/')
    {
        return 2;
    }
    else if (ch == '^')
    {
        return 3;
    }
    else
    {
        return -1;
    }
}
string infixtopostfix(string infix)
{
    string postfix;
    stack<char> st;
    for (int i = 0; i < infix.length(); i++)
    {
        if (infix[i] >= '0' && infix[i] <= '9')
        {
            postfix.push_back(infix[i]);
        }
        else if (infix[i] == '(')
        {
            st.push(infix[i]);
        }
        else if (infix[i] == ')')
        {
            while (st.top() != '(')
            {
                postfix.push_back(st.top());
                st.pop();
            }
            if(st.top()=='(')
            {
                st.pop();
            }
        }
        else if (infix[i] == '+' || infix[i] == '-' || infix[i] == '*' || infix[i] == '/' || infix[i] == '^')
        {
            if (st.empty())
            {
                st.push(infix[i]);
            }
            else if (!st.empty())
            {
                if (presedence(infix[i]) > presedence(st.top()))
                {
                    st.push(infix[i]);
                }
                else if ((presedence(infix[i]) == presedence(st.top())) && infix[i] == '^')
                {
                    st.push(infix[i]);
                }
                else
                {
                    while ((!st.empty()) && (presedence(infix[i]) <= presedence(st.top())))
                    {
                        postfix.push_back(st.top());
                        st.pop();
                    }
                    st.push(infix[i]);
                }
            }
        }
    }
    while(!st.empty())
    {
       postfix.push_back(st.top());
       st.pop();
    }
    return postfix;
}
int main()
{
    int t,count=0;
    cin >> t;
    cin.ignore();
    cin.ignore();
    while (t--)
    {
        string infix,ch;
        if(count>0)
        {
            cout<<endl;
        }
        count++;
        while(getline(cin, ch))
        {
         if (ch.size() == 0 || !cin)
         {
           break;   
         }
         infix+=ch;
        }
        cout<<infixtopostfix(infix)<<endl;
        infix.clear(),ch.clear();
    }
}