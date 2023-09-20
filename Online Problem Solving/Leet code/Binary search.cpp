#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
    int low = 0;
    int high = nums.size()-1;
    int ans = -1;
    while(low<=high)
    {
        int mid = low+(high-low)/2;
        if(nums[mid]==target)
        {
            ans=mid;
            break;
        }
        if(target>nums[mid])
        {
            low = mid+1;
        }
        else if(target<nums[mid])
        {
            high = mid-1;
        }

    }
    return ans;

    }
};

int main()
{
    Solution s;
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    int target;
    cin>>target;
    cout<<s.search(a,target)<<endl;

    return 0;
}

/*
int main()
{


    vector<int>arr = {2,6,8,10,12,14,15,18,19,28,30};
    int low = 0;
    int high = arr.size()-1;
    int target = 45;
    int ans = -1;
    while(low<=high)
    {
        int mid = low+(high-low)/2;
        if(arr[mid]==target)
        {
            ans=mid;
            break;
        }
        if(target>arr[mid])
        {
            low = mid+1;
        }
        else if(target<arr[mid])
        {
            high = mid-1;
        }

    }
    cout<<ans<<"\n";

    return 0;
}
//*/
