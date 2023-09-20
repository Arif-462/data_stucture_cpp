/*
#include <bits/stdc++.h>
using namespace std;

int main() {
    //ios::sync_with_stdio(false);
    //cin.tie(NULL);

    int t;
    cin >> t;
    map<string, int> cnt;
    while (t--)
    {
        string s;
        cin >> s;
        if (cnt[s] >= 1)
            cout << s << cnt[s] << '\n';
        else
            cout << "OK" << '\n';
        cnt[s]++;
    }

    return 0;
}
*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    map<string, int> cnt;
    while(t--)
    {
        string s;
        cin>>s;
        if(cnt[s] >= 1)
            cout<<s<<cnt[s]<<"\n";
        else
            cout<<"OK"<<"\n";
        cnt[s]++;
    }
    return 0;
}
//*/
