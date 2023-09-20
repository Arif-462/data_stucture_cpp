#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y;
    double d,ans;
    cin>>x>>y;
    if(x>y)
    {
        ans=0;
    }
    else
    {
         ans = y-x;

    }
     d = ceil(ans/10);
    cout<<d<<"\n";
    return 0;
}
