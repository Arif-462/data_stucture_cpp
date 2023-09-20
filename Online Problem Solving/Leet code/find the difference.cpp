#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    char findTheDifference(string s, string t) {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        for(int i=0; i<t.size(); i++)
        {
            if(s[i] != t[i])
                return t[i];

        }
        return t[t.size()-1];

    }
};
int main()
{
    Solution f;
    string s, t;
    getline(cin, s);
    getline(cin,t);
    cout<<f.findTheDifference(s, t);
//    for(int i=0; i<t.size(); i++)
//    {
//        if(s[i] != t[i])
//            cout<<t[i]<<"\n";
//    }
    return 0;
}
