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
        vector<pair<int,int>>odd, even;
        for(int i=1; i<=n; i++)
        {
            int b;
            cin>>b;
            if(b%2==0)
            {
              even.push_back({b,i});
            }
            else
            {
                odd.push_back({b,i});
            }

        }
        if(odd.size()>=3)
        {
            cout<<"YES"<<"\n";
            cout<<odd[0].second<<" "<<odd[1].second<<" "<<odd[2].second<<"\n";
        }
        else if(odd.size()>=1 && even.size()>=2)
        {
            cout<<"YES"<<"\n";
            cout<<odd[0].second<<" "<<even[0].second<<" "<<even[1].second<<"\n";
        }
        else
        {
            cout<<"NO"<<"\n";
        }

    }
    return 0;
}

