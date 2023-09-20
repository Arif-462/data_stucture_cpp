#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v(n+1);
    for(int i=1; i<=n; i++)
    {
        cin>>v[i];
    }

    vector<int>p(n+1);
    for(int i=1; i<=n; i++)
    {
        p[i]= (p[i-1]+v[i]);
    }
    int q;
    cin>>q;
    while(q--)
    {
        int l,r;
        cin>>l>>r;
        cout<<p[r]-p[l-1];
    }
    return 0;
}
