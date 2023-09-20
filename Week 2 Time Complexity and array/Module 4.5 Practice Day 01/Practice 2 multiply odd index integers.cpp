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
        if(i % 2 != 0)
        {
            result = result * a[i];
        }
    }
    cout<<result<<"\n";
    return 0;
}
