#include<bits/stdc++.h>
using namespace std;
/*
    (n*n*n)
    n^3==O(n^3);

    time complexity is O(N^3);
    3 ta nested loop

*/
int main()
{
    int n;
    cin>>n; //space O(1);

    for(int i=0; i<n; i++) //O(n)
    {
        for(int j=0; j<n; j++) //O(n);
        {
            for(int k=0; k<n; k++)//O(n)
            {
                cout<<i<<" "<<j<<" \n";
            }
        }
    }
    return 0;
}

