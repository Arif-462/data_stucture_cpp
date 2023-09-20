#include<bits/stdc++.h>
using namespace std;
int maxValue(int a, int b)
{
    if(a>b)
    {
        return a;
    }
    else
        return b;
}
int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;

    int m = maxValue(a,b);
    int n = maxValue(c,d);
    int ans = maxValue(m,n);
    cout<<ans<<"\n";


    return 0;
}
