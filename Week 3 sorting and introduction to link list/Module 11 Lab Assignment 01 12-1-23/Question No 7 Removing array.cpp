#include<bits/stdc++.h>
using namespace std;

vector<int> removing_array(vector<int>arr, int a, int b)
{
    vector<int>removed_arr;
    for(int i=1; i<=arr.size(); i++)
    {
        if(i>=a && i<=b)
        {
            continue;
        }
        else
        {
           removed_arr.push_back(arr[i]);
        }
    }
    return removed_arr;
}

int main()
{
    int n,a,b;
    cin>>n;
    vector<int>arr(n+1);
    for(int i=1; i<=n; i++)
    {
        cin>>arr[i];
    }
    cin>>a>>b;
    vector<int>ans = removing_array(arr,a,b);
    for(int i=0; i<ans.size()-1; i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}

