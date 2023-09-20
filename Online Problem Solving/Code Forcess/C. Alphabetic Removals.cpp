#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;

    string s;
    cin>>s;
    map<char, vector<int>>cnt;

   for(int i=0; i<n; i++)
   cnt[s[i]].push_back(i);

   map<int , bool>visited;

   for(char ch='a'; ch<='z';ch++)
   {
       for(int i=0; i<cnt[ch].size() && k>=1; i++)
       {
           int index = cnt[ch][i];
           visited[index] = true;
           k--;
       }
   }
   for(int i=0; i<n; i++)
   {
       if(visited[i]==false)
       {
           cout<<s[i];
       }
   }
   cout<<endl;

    return 0;
}

