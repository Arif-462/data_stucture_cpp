#include <bits/stdc++.h>
using namespace std;

int Find_max(vector<int>a, int i)
{
    if(a.size()-1 == i)
        return a[i];

    return max(a[i], Find_max(a , i+1));
}

int main()
{

    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    int maxi=Find_max(a , 0);

    cout<<maxi<<endl;

    return 0;
}

