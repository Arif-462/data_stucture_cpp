#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    stack<char> st;
    int count=0;
    for(int i=0; i<s.size(); i++)
    {
        char c=s[i];
        if(c =='{')
        {
            st.push(c);
        }
        else if(c='}' && st.empty() == 0 && st.top()=='{' )
        {
            st.pop();
            count++;
        }
        else
        {
            st.push(c);
        }
    }
    if(st.empty()==true)
    {
        cout<<count*2<<endl;
    }
    else
    {
        cout<<0<<endl;
    }


    return 0;
}


