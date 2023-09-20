#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> searchRange(vector<int>& nums, int target)
    {
        int low = 0;
        int high = nums.size()-1;
        int first_index = -1;

        vector<int>ans(2);
        while(low<=high)
        {
            int mid = low +(high-low)/2;
            if(nums[mid]==target)
            {
                first_index=mid;
                high = mid-1;
            }
            else if(target>nums[mid])
            {
                low = mid+1;
            }
            else if(target<nums[mid])
            {
                high = mid-1;
            }

        }
        ans[0]= first_index;

        low = 0;
        high = nums.size()-1;
        int last_index = -1;
        while(low<=high)
        {
            int mid = low +(high-low)/2;
            if(nums[mid]==target)
            {
                last_index=mid;
                low = mid+1;
            }
            else if(target>nums[mid])
            {
                low = mid+1;
            }
            else if(target<nums[mid])
            {
                high = mid-1;
            }

        }
        ans[1]=last_index;
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
    vector<int>ans = s.searchRange(a,target);
    for(int i=0; i<ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }


    return 0;
}

