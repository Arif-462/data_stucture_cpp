#include <iostream>
using namespace std;
int main()
{
    int n,x;
    cin>>n;

    int arr[n];
    for(int i=1; i<=n; i++)
    {
        arr[i]= 0;
    }
    for(int i=1; i<n; i++)
    {
        cin>>x;
        arr[x]=1;
    }
    for (int i=1; i<=n; i++)
    {
        if (arr[i] == 0)
        {
            cout<<i<<"\n";
            break;
        }
    }

    return 0;
}

/*

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x;
    cin>>n;
    vector<int>a(n);

    for(int i=0; i<n; i++)
    {
        a[i]=0 ;
    }

    for(int i=0; i<n-1; i++)
    {
        cin>>x;
        a[x]=1;
    }

    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }

    cout<<endl;
    for(int i=0; i<n; i++)
    {
        if(a[i] != 1)
        {
            cout<<i+1<<" ";
            break;
        }
    }
    return 0;
}
//*/
