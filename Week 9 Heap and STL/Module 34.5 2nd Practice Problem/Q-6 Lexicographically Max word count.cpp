#include<bits/stdc++.h>
using namespace std;

int main()
{

    map<string, int> m;

    string s = "This is a sample text is a text lol hi is text";


    for(int i=0; i<s.size(); i++)
    {

        m.insert(s[i]);
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
