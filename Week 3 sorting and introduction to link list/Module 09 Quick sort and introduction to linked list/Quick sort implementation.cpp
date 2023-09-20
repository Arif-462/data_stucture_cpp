#include<bits/stdc++.h>
using namespace std;

vector<int> quick_sort(vector<int>&a)
{
    // base case
    if(a.size() <= 1)
    {
        return a;
    }
    //declare pivot and declare size.
    int pivot = a.size()-1;

    //declare 2 vector for left and right
    vector<int>b, c;

    //traverse all element and push the value into 2 vector for sorting
    for(int i=0; i<a.size(); i++)
    {
        if(i == pivot)
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

    //for sorting declare 2 sorted vector and recurcive quick sort for sorting process continue.
    vector<int>sorted_b = quick_sort(b);
    vector<int>sorted_c = quick_sort(c);

    vector<int>sorted_a;

    //sorted-b vector value push to main sorted_a vector.
    for(int i=0; i<sorted_b.size(); i++)
    {
        sorted_a.push_back(sorted_b[i]);
    }

    sorted_a.push_back(a[pivot]);// pivot push to sorted_a vector.

    //sorted_c vector element push to sorted_a vector.
    for(int i=0; i<sorted_c.size(); i++)
    {
        sorted_a.push_back(sorted_c[i]);
    }

    return sorted_a;
}

int main()
{
    int n;
    cout<<"Enter vector size: ";
    cin>>n;
    vector<int>a(n);
    cout<<"Enter vector elements \n";
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    vector<int>ans = quick_sort(a);

    for(int i=0; i<ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}
