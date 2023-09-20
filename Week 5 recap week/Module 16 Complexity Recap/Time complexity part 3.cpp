#include<bits/stdc++.h>
using namespace std;
/*
    (n * log n)
    n log n==O(n log n);

    time complexity is O(N log n);
    2 ta nested loop

*/
int main()
{
    int n;
    cin>>n; //space O(1);

    for(int i=1; i<n; i++) //O(n)
    {
        for(int j=1; j<n; j=j+i) //O(log n);
        {


                cout<<i<<" "<<j<<" \n";

        }
    }
    return 0;
}
/*
    i=0; loop chalbe n;
    i=1 loop chalbe n/2;
    i=2 loop chalbe n/3;

    i=n loop chalbe n/n;

    n/1+n/2+n/3---n/n
    = n(1/1+1/2+1/3---1/n)
    = ln(n);
    = LOG n;

*/
