#include<bits/stdc++.h>
using namespace std;
//https://codeforces.com/problemset/problem/1676/E
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, q;
        cin>>n>>q;
        vector<int>v(n);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }

        sort(v.begin(), v.end(), greater<int>());

        vector<long long>sum(n+1);
        for(int i=1; i<=n; i++)
            sum[i] = (sum[i-1] + v[i-1]);


        while(q--)
        {
            int value;
            cin>>value;

                auto it = lower_bound(sum.begin(), sum.end(),value);
                if(it != sum.end())
                {
                    cout<<it - sum.begin()<<"\n";
                }
                else
                {
                    cout<<-1<<"\n";
                }
            }

        }
    return 0;
}
