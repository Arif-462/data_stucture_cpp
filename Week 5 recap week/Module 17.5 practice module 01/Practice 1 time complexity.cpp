#include<bits/stdc++.h>
using namespace std;
int main()
{


    int n;
    cin>>n;

    for(int k=1; k<=n; k=k*2)
    {
        for(int i=1; i<=n; i++)
        {
            cout<<k<<" "<<i<<"\n";
        }
        //O(log n)
    }

    /*
        for(int k=1; k<=n; k++)
        {
            if(k==1)
            {
                for(int i=1; i<=n; i++)
                {
                    cout<<k<<" "<<i<<"\n";
                }
            }

        }

        //O(N)

    /*
            for(int k=1;k<=n;k++)
            {
                if(k % 2 == 0)
                {
                    for(int i=1; i<=n;i++)
                    {
                        cout<<k<<" "<<i<<"\n";
                    }
                }
            }
            //O(log n)

    */

    return 0;
}

