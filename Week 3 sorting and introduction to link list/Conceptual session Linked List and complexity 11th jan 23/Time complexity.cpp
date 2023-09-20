#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=10;
//    for(int i=0; i<n; i++)
//    {
//        cout<<i<<" "; //time complexity O(n)
//    }



//     for(int i=1; i<=n; i++)
//    {
//        for(int j=1; j<=i; j++)
//        {
//            cout<<i<<" "; // time complexity is O(n^2)
//        }
//    }

    int x=0;
    for(int i=1; x<=n; i++)
    {
        x=x+i;
        if(x<=n)
        cout<<x<<endl;
        /*
        a(a+1)/2 >n;
        root a^2 > root n;
        a>root n;

        time complexity is O(root n);


        */
    }



    return 0;
}

