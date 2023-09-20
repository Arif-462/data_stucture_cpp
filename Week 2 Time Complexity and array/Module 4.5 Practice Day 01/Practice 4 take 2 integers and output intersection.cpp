#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>a(n);
    int result=1;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];

    }
    cin>>n;
    vector<int>b(n);
    for(int j=0; j<n; j++)
    {
        cin>>b[j];

    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(a[i]==b[j])
            {
                cout<<a[i]<<" ";
            }
        }

    }
    return 0;
}

