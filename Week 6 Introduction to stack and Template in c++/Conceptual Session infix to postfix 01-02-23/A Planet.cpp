#include<bits/stdc++.h>
using namespace std;

//https://codeforces.com/problemset/problem/1730/A

int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n,c; cin>>n>>c;
        unordered_map<int, int>ump;
        for(int i=1; i<=n; i++)
        {
            int p; cin>>p;
            ump[p]++;
        }
        int ans=0;
        for(auto it:ump)
        {
            ans= ans+min(it.second,c);
        }
        cout<<ans<<"\n";
    }

    return 0;
}


