#include<bits/stdc++.h>
using namespace std;

/*
https://leetcode.com/problems/peak-index-in-a-mountain-array/

https://leetcode.com/problems/valid-parentheses/
*/

class solution{
public:
    bool found=true;
    bool isValid(string s)
    {
       int n=s.size();

       vector<char>v;
       for(int i=0; i<n; i++)
       {
           if((int)v.size()==0)
           {
               v.push_back(s[i]);
           }
           else
           {
               char ch=v.back();
               if(s[i]=='('&& ch==')')
               {
                    v.pop_back();
               }
               else if(s[i]=='{' && ch=='}')
                {
                    v.pop_back();
                }
                else if(s[i]=='[' && ch==']')
                {
                    v.pop_back();
                }
                else
                {
                    v.push_back(s[i]);
                }
           }
       }
       if(v.size()==0)
       {
           found=true;
       }
       else
       {
           found=false;
       }
       return found;
    }
};
int main()
{

    vector<solution>m;
    //m.push_back(solution(cin>>m));
    m.isValid();



    return 0;
}


/*

int peakIndexInMountainArray(vector<int>& arr) {
        int ans=-1;
        for(int i=1;i<arr.size()-1;i++){
            if(arr[i]>arr[i-1] && arr[i]>arr[i+1]){
                ans=i;
                break;
            }
        }
        return ans;
    }

    */

    /*

    bool isValid(string s) {
        int n=s.size();
        bool found=true;
        vector<char> v;
        for(int i=0;i<n;i++)
        {
            if((int)v.size()==0){
                v.push_back(s[i]);
            }
            else{
                char ch=v.back();

                if(ch=='(' && s[i]==')')
                {
                    v.pop_back();
                }
                else if(ch=='{'&&  s[i]=='}')
                {
                    v.pop_back();
                }
                else if(ch=='[' && s[i]==']' ){
                    v.pop_back();
                }
                else{
                    v.push_back(s[i]);
                }
            }
        }
        if(v.size()==0)
        found=true;
        else
        found=false;

        return found;
    }
*/

