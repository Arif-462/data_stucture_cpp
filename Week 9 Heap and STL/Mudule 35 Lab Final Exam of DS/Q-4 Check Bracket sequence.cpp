#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    stack<char> st;
    for(int i=0; i<s.size(); i++)
    {
        char c = s[i];
        if(c =='(' || c =='{' || c=='[')
        {
            st.push(c);
        }
        else if(c ==')' && st.empty() == false && st.top() =='(')
        {
            st.pop();
        }
        else if(c =='}' && st.empty() == false && st.top() =='{')
        {
            st.pop();
        }
        else if(c ==']' && st.empty() == false&& st.top() =='[')
        {
            st.pop();
        }
        else
        {
            st.push(c);
        }
    }
    if(st.empty() == true)
    {
        cout<<"\nYes\n";
    }
    else
       {
           cout<<"\nNo\n";
       }

    return 0;
}



