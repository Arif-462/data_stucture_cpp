#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n;
    vector<int>arr1(n);
    for(int i=0; i<n; i++)
    {
        cin>>arr1[i];
    }
    cin>>m;
    vector<int>arr2(m);
    for(int j=0; j<m; j++)
    {
        cin>>arr2[j];
    }

    for(int i=0; i<n; i++)
    {
        cout<<arr1[i]<<" ";
    }

    for(int j=0; j<m; j++)
    {
        int flag=0;
        for(int i=0; i<n; i++)
        {
            if(arr1[i]==arr2[j])
            {
                flag=1;
                continue;
            }
        }
        if(flag==0)
        {
            cout<<arr2[j]<<" ";
        }
    }
    return 0;
}

