#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int , int> mp;
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int a;
        cin>>a;
        mp[a]++;
    }

    for(auto it:mp)
    {
        cout<<it.first<<" : "<<it.second<<"\n";
    }


    return 0;
}
