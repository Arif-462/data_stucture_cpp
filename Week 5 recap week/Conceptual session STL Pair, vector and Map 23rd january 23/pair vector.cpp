#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<pair<string,int>> v;
//    p.first.first = "abcd";
//    p.first.second = "plk";
//    p.second = 24;
    for(int i=1; i<=n; i++)
    {
        string fullName;
        int age;

        cin>>fullName;
        cin>>age;
        v.push_back({fullName,age});
    }

    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }

    //cout<<p.first.first<<" "<<p.first.second<<" "<<p.second;
    return 0;
}


/*
// array te push korar somay pair onujaie separate kore dite hove.
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<pair<pair<string,string>,int>>v;
//    p.first.first = "abcd";
//    p.first.second = "plk";
//    p.second = 24;
    for(int i=1; i<=n; i++)
    {
        string fullName, nickName;
        int age;

        cin>>fullName>>nickName;
        cin>>age;
        v.push_back({{fullName,nickName},age});
    }

    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i].first.first<<" "<<v[i].first.second<<" "<<v[i].second<<endl;
    }

    //cout<<p.first.first<<" "<<p.first.second<<" "<<p.second;
    return 0;
}

*/
