#include<bits/stdc++.h>
using namespace std;


//Time complexity

/*
    Time complexity O(sqrt(n));
    space compleity is O(1);
*/

int main()
{
    int n;
    cin>>n;
    for(int i=1; i*i<=n; i++)
    {
        if(n%i==0)
        {
            cout<<i<<"\n";
            cout<<(n/i)<<"\n";
        }
    }


    return 0;
}

