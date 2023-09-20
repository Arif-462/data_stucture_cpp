#include<bits/stdc++.h>
using namespace std;
//a+b*c+d*e
prec(char ch)
{
    if(ch=='+'||ch=='-')
    {
        return 0;
    }
    // for   * & /
    return 1;
}
int main()
{
    string s;
    cin>>s;
    stack<char>st;
    string ans ="";

    for(int i=0; i<s.size(); i++)
    {
        char p = s[i];
        if(p >='a' && p <= 'z')
            {
                ans += p;
            }
        else
        {
            while(st.size() && prec(st.top()) >= prec(p))
            {
                ans += st.top();
                st.pop();
            }
            st.push(p);
        }
         //cout<<ans<<endl;
    }
    while(st.size())
    {
        ans += st.top();
        st.pop();
        cout<<ans<<endl;
    }

    return 0;
}
