#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        map<int, int> cnt;
        for(int i=1; i<=n; i++)
        {
            int in;
            cin>>in;
            cnt[in]++;
        }

        priority_queue<int>pq;

        for(pair<int, int> p:cnt)
        {
            pq.push(p.second);
        }

        int prv, next, ans=0;
        while(pq.size()>=2)
        {
            prv = pq.top();
            pq.pop();
            next = pq.top();
            pq.pop();
            prv--;
            next--;
            if(prv !=0)
                pq.push(prv);
            if(next != 0)
                pq.push(next);
        }
        while(!pq.empty())
        {
            ans += pq.top();
            pq.pop();
        }
        cout<<ans<<"\n";
    }
    return 0;
}

//https://codeforces.com/problemset/problem/1506/D
