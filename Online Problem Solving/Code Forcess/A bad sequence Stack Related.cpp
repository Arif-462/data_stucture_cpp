#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    string n;
    cin>>n;
    stack<char>s;
    for(int i=0; i<t; i++)
    {


        if(i==0)
        {
            s.push(n[i]);
        }
        else
        {
            if(s.size()>=1 && s.top()=='(' && n[i]==')')
            {
                s.pop();
            }
            else
            {
                s.push(n[i]);
            }
        }
    }
    int open=0, close=0;
    while(!s.empty())
    {
        if(s.top()=='(')
        {
            open++;
        }
        else
        {
            close++;
        }
        s.pop();
    }
    if((open==0 && close==0)|| open ==1 && close==1)
    {
        cout<<"Yes"<<"\n";
    }
    else
    {
        cout<<"No"<<"\n";
    }
   return 0;
}

