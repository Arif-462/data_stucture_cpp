
#include<bits/stdc++.h>
using namespace std;
//https://leetcode.com/problems/next-greater-element-i/

vector<int>nextGreaterElement(vector<int>&nums1, vector<int>&nums2)
{
    vector<int>a;
    for(int i=0; i<nums1.size(); i++)
    {
        for(int j=0; j<nums2.size(); j++)
        {
            if(nums1[i] == nums2[j])
            {
                int ans = nums2[j+1];

                if( ans > nums1[i])
                {
                    a.push_back(ans);

                }
                else
                {
                    a.push_back(-1);
                }
            }
        }
    }
    return a;
}

int main()
{
    int n,m;
    cin>>n;
    vector<int>a(n);

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    cin>>m;
    vector<int>b(m);
    for(int i=0; i<m; i++)
    {
      cin>>b[i];
    }

    vector<int> ans = nextGreaterElement(a, b);

    for(int i=0; i<ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }

    return 0;
}


