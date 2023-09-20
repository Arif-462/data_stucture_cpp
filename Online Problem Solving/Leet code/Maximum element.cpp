#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    int majorityElement(vector<int>& nums)
    {
        map<int, int> a;
        for(int i:nums)
            a[i]++;
        int maxVal = nums[0];
        for(auto x:a)
        {
            if(x.second > a[maxVal])
                maxVal = x.first;
        }
        return maxVal;

    }
};
int main()
{
    Solution s;
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    cout<<s.majorityElement(v);

    return 0;
}

