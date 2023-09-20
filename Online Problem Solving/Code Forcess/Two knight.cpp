#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,i;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        long long int ans = (i*i*((i*i)-1)/2) - (4*(i-1)*(i-2));
        cout<<ans<<"\n";
    }
    return 0;
}
