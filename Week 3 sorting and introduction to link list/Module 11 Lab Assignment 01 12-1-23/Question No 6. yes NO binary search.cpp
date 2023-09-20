#include<bits/stdc++.h>
using namespace std;
void found(vector<int>a, int k)
{
    int lb=0;
    int ub=a.size()-1;
    int count=0;
    while(lb <= ub)
    {
        int mid = lb+(ub-lb)/2;
        if(a[mid]== k)
        {
            //count++;
           ub = mid-1;
           count++;
        }
        else if(a[mid] < k)
        {

            lb=mid+1;
        }
        else if(a[mid]>k)
        {
            ub=mid-1;
        }
    }

    lb=0;
    ub=a.size()-1;
    int count1=0;
    while(lb <= ub)
    {
        int mid = lb+(ub-lb)/2;
        if(a[mid]== k)
        {
            //count++;
           lb=mid+1;
           count1++;
        }
        else if(a[mid] < k)
        {

            lb=mid+1;
        }
        else if(a[mid]>k)
        {
            ub=mid-1;
        }
    }
//    cout<<count<<endl;
//    cout<<count1<<endl;

    if(count>1 || count1>1)
    {
        cout<<"YES\n";
    }
    else
    {
        cout<<"NO\n";
    }
}

int main()
{
    int n,a;
    cin>>n;
    vector<int>arr(n);
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cin>>a;
    found(arr,a);

    return 0;
}

