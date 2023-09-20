#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    //cin>>t;
    string a;
    cin>>a;
    int count=1;
    for(int i=0, j=6; j>0, i<6; j--, i++)
    {
        if(a[i]!=a[j])
        {
            count=0;
            break;
        }

    }

    for(int i=0, j=0; j<6, i<6; j++, i++)
    {
        if(a[j]-a[i]==1)
        {
            count=1;
            break;
        }

    }
    if(count==1)
    {
        cout<<a<<"\n";
    }
    else
    {
        cout<<"not"<<"\n";
    }

    return 0;
}

