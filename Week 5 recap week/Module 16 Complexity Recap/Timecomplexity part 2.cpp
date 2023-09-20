#include<bits/stdc++.h>
using namespace std;
/*
    n+(n*n)
    n^2+n==O(n^2);

    time complexity is O(N^2);

*/
int main()
{
    int n;
    cin>>n;
    for(int i=0; i<n; i++) //O(n)
    {
        cout<<i<<" \n";
    }
    for(int i=0; i<n; i++) //O(n)
    {
        for(int j=0; j<n; j++) //O(n);
        {
            cout<<i<<" "<<j<<" \n";
        }
    }
    return 0;
}
