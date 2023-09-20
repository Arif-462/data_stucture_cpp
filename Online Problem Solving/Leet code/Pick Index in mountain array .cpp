#include<bits/stdc++.h>
using namespace std;


int peakIndexInMountainArray(vector<int>&arr) {
        int ans=-1;
        for(int i=1;i<arr.size()-1;i++){
            if(arr[i]>arr[i-1] && arr[i]>arr[i+1]){
                ans=i;
                break;
            }
        }
        return ans;
    }
int main()
{
    vector<int>arr;
    for(int i=0; i<arr.size(); i++)
    {
        cin>>arr[i];
    }
    peakIndexInMountainArray(arr);


    return 0;
}
