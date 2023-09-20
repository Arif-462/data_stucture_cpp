#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v1(n);

    set<int>st;

    for(int i=0; i<n; i++)
    {
        cin>>v1[i];
        st.insert(v1[i]);
    }
    int m;
    cin>>m;
    vector<int>v2(m);
    for(int i=0; i<m; i++)
    {
        cin>>v2[i];
        st.insert(v2[i]);
    }


    for(auto it = st.begin(); it !=st.end(); it++)
    {
        cout<<*it<<" ";
    }

    return 0;
}
