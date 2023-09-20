#include<bits/stdc++.h>
using namespace std;
//abbaacdkl
int main()
{
    string s;
    cin>>s;
    map<char,vector<int>>mp;

//    for(char ch:s)
//    {
//        mp[ch].push_back
//    }
    for(int i=0; i<s.size(); i++)
    {
        mp[s[i]].push_back[i];
    }
    for(auto it:mp)
    {
        char fh=it.first;
        vector<int>v=it.second;
        for(int val:v)
        {
            cout<<val<<" ";
            cout<<endl;
        }
    }
    return 0;
}


