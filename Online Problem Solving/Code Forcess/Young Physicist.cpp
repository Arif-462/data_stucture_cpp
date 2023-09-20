#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int>v;
    while(n--)
    {
        int x,y,z;
        cin>>x>>y>>z;
        int sum=x+y+z;
        v.push_back(sum);
    }
    int ans=0;
    for(int i=0; i<v.size(); i++)
    {
        ans+=v[i];
    }
    if(ans==0)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}
