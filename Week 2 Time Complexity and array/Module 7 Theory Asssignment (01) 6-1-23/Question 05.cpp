#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>d[n+1];
    for(int i=1 ; i<=n ; i++)
    {
        for(int j=i ; j<=n ; j = j+i )
        {
            d[j].push_back(i);
        }
    }
    for(int i=1 ; i<=n ; i++)
    {
        vector<int>v=d[i];
        for(int j=0; j<v.size(); j++)
        {
            cout<<v[j]<<" ";
        }
        cout<<endl;

    }


    return 0;
}




/*
in the first time the code loop run into n time so the time complexity is O(n) and second l
loop run 1st time n time gradually reduce after first itaretion into loop.
so the time complexity is (log2^n).

so total time complexity is O(n*logn)==O(nlog2^n)
O(n*log2^n)
O(nlog2^n)
*/
