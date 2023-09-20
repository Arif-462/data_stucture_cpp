#include<bits/stdc++.h>
using namespace std;

vector<int>QuickSorted(vector<int>a)
{
    if(a.size()<=1)
    {
        return a;
    }
    int pivot = rand() % (a.size());
    vector<int>b,c;
    for(int i=0; i<a.size(); i++)
    {
        if(i==pivot)
        {
            continue;
        }
        if(a[i] <= a[pivot])
        {
            b.push_back(a[i]);
        }
        else
        {
            c.push_back(a[i]);
        }
    }
    vector<int>sorted_b=QuickSorted(b);
    vector<int>sorted_c=QuickSorted(c);

    vector<int>sorted_a;
    int idx1=0;
    int idx2=0;
     for(int i=0; i<sorted_b.size(); i++)
     {
         sorted_a.push_back(sorted_b[i]);
     }
     sorted_a.push_back(a[pivot]);

     for(int i=0; i<sorted_c.size(); i++)
     {
         sorted_a.push_back(sorted_c[i]);
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
    vector<int> ans = QuickSorted(a);
    for(int i=ans.size()-1; i>=0; i--)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}


