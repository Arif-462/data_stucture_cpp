#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<string>st;
    string s;
    cin>>s;
    st.push(s);

    for(int i=0; i<st.size(); i++)
    {
        if(st.top() != "WUB")
        {
            cout<<" ";
        }
        cout<<st.top()<<" ";
        st.pop();
    }
    return 0;
}
