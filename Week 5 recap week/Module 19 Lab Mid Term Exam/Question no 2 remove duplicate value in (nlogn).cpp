#include<bits/stdc++.h>
using namespace std;

vector<int>SortedRomveDuplicate(vector<int>a)
{
    if(a.size()<=1)
    {
        return a;
    }
    int mid=a.size()/2;

    vector<int>b,c;
    for(int i=0; i<mid; i++)
    {
        b.push_back(a[i]);
    }
    for(int i=mid; i<a.size(); i++)
    {
        c.push_back(a[i]);
    }

    vector<int>sorted_b=SortedRomveDuplicate(b);
    vector<int>sorted_c=SortedRomveDuplicate(c);

    vector<int>sorted_a;
    int idx1=0;
    int idx2=0;
    for(int i=0; i<a.size(); i++)
    {
        if(sorted_b.size()==idx1)
        {
            sorted_a.push_back(sorted_c[idx2]);
            idx2++;
        }
        else if(sorted_c.size()==idx2)
        {
            sorted_a.push_back(sorted_b[idx1]);
            idx1++;
        }
        else if(sorted_b[idx1]<sorted_c[idx2])
        {
            sorted_a.push_back(sorted_b[idx1]);
            idx1++;
        }
        else
        {
            sorted_a.push_back(sorted_c[idx2]);
            idx2++;
        }
    }
    return sorted_a;
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
    vector<int> ans=SortedRomveDuplicate(a);
    for(int i=0; i<ans.size(); i++)
    {
        if(ans[i] != ans[i+1])
        {
            cout<<ans[i]<<" ";
        }
    }
    return 0;
}

