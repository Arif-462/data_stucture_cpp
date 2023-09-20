#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q;
    cin>>n;
    vector<int>a(n);
    for(int i=0; i<n; i++)
    {
       cin>>a[i];
    }
    cin>>q;
    vector<int>b(q);
    for(int j=0; j<q; j++)
    {
        cin>>b[j];
    }

    for(int j=0; j<q; j++)
    {
        int found=0;
        for(int i=0; i<n; i++)
        {
            if(a[i]==b[j])
            {
                found=1;
            }
        }
        if(found==1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }

    return 0;
}
