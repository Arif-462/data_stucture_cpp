#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<string,int> mp;

    int n;
    cin>>n;
    string s;

    for(int i=0; i<n; i++)
    {
        cin>>s;
        if(mp.count(s) > 0 )
        {
            cout<<mp[s]<<"\n";
        }
        else
        {
            cout<<-1<<"\n";
        }
        mp[s]=i;
    }

    return 0;
}























//*/
/*
#include<bits/stdc++.h>
using namespace std;
int main() {
    map<string, pair<string, int>>mp;
    int n;
    cin>>n;
    string s;

    for(int i = 0; i<n; i++) {

        cin>>s;
        mp[s].first;
        mp[s].second = i;
        }

        //sort(mp.cbegin(),mp.cend());
    for(auto it : mp) {
       cout<<it.second.first<<" "<<it.second.second<<"\n";
    }

}

//*/




//    cout<<"First duplicate value is : "<<s
//        <<"\nWhich present in index "<<position<<endl;



/*
    map<int,pair<int, int>>mp;
    int n;
    cin>>n;
    int value, position, flag=0;
    for(int i = 0; i<n; i++) {
        int x;
        cin>>x;
        mp[x].first++;
        if(mp[x].first > 1 && flag==0) {
            value = x;
            position = mp[x].second;
            flag=1;
        } else {
            mp[x].second = i;
        }
    }

    cout<<"First duplicate value is : "<<value
        <<"\nWhich present in index "<<position<<endl;

*/
/*

#include<bits/stdc++.h>
using namespace std;
int main() {


    int n;
    cin>>n;
    map<string, int>m;
    vector<string>str(n);
    for(int i=0; i<n; i++)
        {
        cin>>str[i];
        string visited = str[i];
        if(m.count(visited)>0)
        {
            cout<<m[visited]<<"\n";
        } else
        {
            cout<<-1<<"\n";
        }
        m[visited] = i;
    }
    return 0;
}
*/
