#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int r,c,t;
    long long int ans;
    cin>>t;
    while(t--)
    {
        cin>>r>>c;
        if(r<c)
        {
            if(c%2==1)
            {
                ans=(c*c)-(r-1);
            }
            else
            {
                ans=((c-1)*(c-1))+r;
            }
        }
        else
        {
            if(r%2==1)
            {
                ans=((r-1)*(r-1))+c;
            }
            else
            {
                ans=(r*r)-(c-1);
            }
        }
        cout<<ans<<"\n";
    }

    return 0;
}
