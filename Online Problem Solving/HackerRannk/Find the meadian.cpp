#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }

    for(int i=0; i<(v.size()-1)/2; i++)
    {
        if(i==n/2)
        {
            cout<<i<<"\n";
        }
    }
    return 0;
}
