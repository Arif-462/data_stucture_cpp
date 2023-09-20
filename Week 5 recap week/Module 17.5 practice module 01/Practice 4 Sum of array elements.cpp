#include<bits/stdc++.h>
using namespace std;
int sumOfArray(vector<int>&a)
{
    int sum=0;
    if(a.size()==0)
        return 0;

        for(int i=0; i<a.size(); i++)
        {
            sum = sum +
        }

    return sum;
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

    int ans=sumOfArray(a);
    cout<<ans<<endl;

    return 0;
}
