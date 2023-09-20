#include<bits/stdc++.h>
using namespace std;
/*
 value gula duplicate thake na or Uique value thake
 value gula sorted ordere thake
 redBlack tree dia make kora
 maximum problem Log n time problem solve kore
 Onekgula stl function use kora jay
*/
int main()
{
    int n;
    cin>>n;

    map<int,int>mp;
    //cout<<mp[1]<<endl;
//    mp[2]=5;
//    mp[2]=3;
//    mp[1]=4;
//    mp[6]=90;
//    mp[5]=4;
//    mp[5]=10;
//    //cout<<mp[2];
//    for(auto it:mp)
//    {
//        cout<<it.first<<" "<<it.second<<"\n";
//    }
    for(int i=1; i<=n; i++)
    {
        int in;
        cin>>in;
        mp[in]++;
    }
    for(pair<int, int>p:mp)
    {

        cout<<p.first<<" "<<p.second<<endl;
    }

    return 0;
}



