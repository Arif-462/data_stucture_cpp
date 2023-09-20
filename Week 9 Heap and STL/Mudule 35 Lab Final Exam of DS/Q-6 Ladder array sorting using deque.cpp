#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    deque<int> d;
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
        d.push_back(v[i]);
    }

    sort(d.begin(), d.end());
    while(!d.empty())
    {
        cout<<d.front()<<" ";
        d.pop_front();
    }
    return 0;
}
