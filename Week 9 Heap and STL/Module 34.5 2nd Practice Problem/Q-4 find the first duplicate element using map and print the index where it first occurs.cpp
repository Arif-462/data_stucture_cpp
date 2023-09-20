#include<bits/stdc++.h>
using namespace std;
int main() {
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

}

/*
#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<int, int> m;
    int n;
    cin>>n;
    int value,pos,flag = 0;
    for(int i=0; i<n; i++)
    {
        int s;
        cin>>s;
        m[s]++;

        if(m[s]>1)
        {
            value = s;
            pos = i;

        }
    }

    cout<<endl;
    int p=0;
    for(auto it:m)
    {

        if(it.second > 1)
        {
            cout<<"First duplicate element is "<<it.first<<","
            <<"first occurring at index "<<p<<"\n";
            break;
        }
        p++;
    }
    return 0;
}
*/
