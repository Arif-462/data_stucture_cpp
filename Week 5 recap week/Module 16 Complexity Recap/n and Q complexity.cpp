#include<bits/stdc++.h>
using namespace std;
/*
    n+q
    q+n==O(n+q);

    time complexity is O(n+q);

*/
int main()
{
    int n,q;
    cin>>n>>q;
    for(int i=0; i<n; i++) //O(n)
    {
        cout<<i<<" \n";
    }
    for(int i=0; i<q; i++) //O(q)
    {


            cout<<i<<" "<<j<<" \n";

    }
    return 0;
}

