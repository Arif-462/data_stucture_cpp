#include<bits/stdc++.h>
//https://github.com/Asif-102/conceptual_stack_link_list
using namespace std;
int main()
{
    int n;
    cin>>n;
    stack<int>st;
    for(int i=1; i<=n; i++)
    {
        int x;
        cin>>x;
        st.push(x);
    }
    while( st.empty()== false )
    {
        cout<<st.top()<<" ";
        st.pop();
    }
    return 0;
}
