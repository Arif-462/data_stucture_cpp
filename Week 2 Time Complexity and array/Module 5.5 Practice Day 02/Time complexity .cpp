#include<bits/stdc++.h>
using namespace std;
int main()
{

    describe time complexity for given code

    1. int k=1;
    while(k<=n )
    {
        cout<<k<<endl;
        k=k*2; // digun akare barse eijonno log n
    }
    //2*n
    Time complexity is O(logN);


    2.
    for (int i = 0; i < n; i++)
        for (int j = i; j > 0; j--)
            cout << i << j;
    //n*n
    Time complexity is O(n^2)


    3.
    for (int i = 0; i < n; i++)
        for (int j = i; j > 0; j--)
            for(int k=j; k > 0; k--)
                cout << i << j << k;
    //n*n*n
    Time complexity is O(n^3).


    4.
    for(int i=n/2; i<=n; i++)
    {
        for(int j=1; j<=n; j=j*2) //log akare barce
        {
            cout<<i<<j<<endl;
        }
    }
    //n*2*n
    Time complexity is O(NlogN);


    5.
    for(int i=n/2; i<=n; i++)
    {
        for(int j=1; j<=n; j=j+i)
        {
            cout<<i<<j<<endl;
        }
    }
    //n*n
    Time complexity is O(n^2);


    6.
    for(int i=1; i<=n; i++)
    {
        if(__builtin_popcount(i) == 1)
        {
            for(int j=1; j<=n; j++)
                cout<<i<<j<<endl;
        }
    }
    //n*1*n //n*n
    Time complexity is O(n^2);
    return 0;
}
