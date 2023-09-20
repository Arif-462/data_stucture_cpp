#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int>mp;
         vector<int> result;

    for (int i = 0; i < nums.size(); i++) {
        int a = target - nums[i];
        if (mp.find(a) != mp.end()) {
            result.push_back(mp[a]);
            result.push_back(i);

            return result;
        }
        mp[nums[i]] = i;
    }

    return result;
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
    vector<int> result = s.twoSum(a, target);
    cout << "[" << result[0] << ", " << result[1] << "]" << endl;

    return 0;
}

