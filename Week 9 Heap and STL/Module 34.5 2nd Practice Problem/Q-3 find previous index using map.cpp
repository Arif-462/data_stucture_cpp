#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;

    vector<pair<int,int>>vec(n);
    for(int i=0; i<n; i++) {
        cin>>vec[i].first;
        vec[i].second = i;
    }
    sort(vec.begin(),vec.end());
    for(auto i : vec) {
        cout<<"Value "<<i.first<<" Previous index "<<i.second<<"\n";
    }

    return 0;
}

/*
vector<pair<int,int>>vec(n);
for(int i=0; i<n; i++)
{
cin>>vec[i].first;
vec[i].second = i;
}
sort(vec.begin(),vec.end());
for(auto i : vec)
{
cout<<"Value "<<i.first<<" Previous index "<<i.second<<"\n";
}

/*#include<bits/stdc++.h>
using namespace std;

int main()
{

    map<int, int> m;
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int s;
        cin>>s;
        m[s]++;
    }
    sort(m.begin(), m.end());

    cout<<endl;

    for(auto it:m)
    {
        if(it.second>1)
        cout<<it.first<<" = "<<it.second<<"\n";

    }


    return 0;
}
*/
