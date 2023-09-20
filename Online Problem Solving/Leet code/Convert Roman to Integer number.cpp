#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        map<char, int> mp = {{'I', 1},{'V', 5}, {'X', 10},{'L', 50},{'C', 100},
            {'D', 500},{'M', 1000}
        };


        int intSum = 0;

        for( int i=0; i<s.length(); i++) {
            if(mp[s[i]] < mp[s[i+1]])
                intSum -= mp[s[i]];

            else
                intSum += mp[s[i]];
        }

        return intSum;
    }
};

int main() {
    Solution Ans;
    string s;
    cin>>s;

    cout<<Ans.romanToInt(s)<<"\n";

    return 0;
}
