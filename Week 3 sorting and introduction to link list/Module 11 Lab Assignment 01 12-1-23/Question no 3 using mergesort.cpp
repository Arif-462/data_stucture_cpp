#include<bits/stdc++.h>
using namespace std;

vector<int>marge_sort(vector<int>a)
{
    //base case start.
    if(a.size()<=1)
    {
        return a;
    }
    // base case end.

    int mid = a.size()/2;
    vector<int>b;
    vector<int>c;
    for(int i=0; i<mid; i++)
    {
        b.push_back(a[i]);
    }
    for(int i=mid; i<a.size(); i++)
    {
        c.push_back(a[i]);
    }
    vector<int>sorted_b = marge_sort(b);
    vector<int>sorted_c = marge_sort(c);

    vector<int>sorted_a;
    int index1 = 0;
    int index2 = 0;
    for(int i=0; i<a.size(); i++)
    {
        if(index1 == sorted_b.size())
        {
            sorted_a.push_back(sorted_c[index2]);
            index2++;
        }
        else if(index2 == sorted_c.size())
        {
            sorted_a.push_back(sorted_b[index1]);
            index1++;
        }
        else if(sorted_b[index1] < sorted_c[index2])
        {
            sorted_a.push_back(sorted_b[index1]);
            index1++;
        }
        else
        {
            sorted_a.push_back(sorted_c[index2]);
            index2++;
        }
    }

    return sorted_a;
}

void foundPair(vector<int>a, int k)
{
     int i=0, j=a.size()-1;
     int countt=0;
        while(i<j)
        {
            if(a[i] + a[j] > k)
            {
                j--;
            }
            else if(a[i] + a[j] < k)
            {
                i++;
            }
            else if(a[i] + a[j] == k)
            {
                countt++;
                i++;
                j--;
            }

        }
        cout<<countt<<endl;

}
int main()
{
    int n,k;
    cin>>n;
    vector<int>a(n);
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    cin>>k;
    vector<int>ans = marge_sort(a);

    foundPair(ans, k);

    return 0;
}
