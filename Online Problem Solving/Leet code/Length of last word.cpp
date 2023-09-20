#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    int lengthOfcLastWord(string s) {
    bool found_nonspace = false;

    string s1;

    for (auto ch = s.rbegin(); ch != s.rend(); ch++) {
        if (!found_nonspace && isspace(*ch)) {
            continue;
        }
        else if (!found_nonspace) {
            found_nonspace = true;
            s1.push_back(*ch);
        }
        else if (found_nonspace && isspace(*ch)) {
            break;
        }
        else {
            s1.push_back(*ch);
        }
    }

    return s1.length();
}
};

int main()
{
    Solution s;
    string x  ;
    getline(cin, x);


    cout<<s.lengthOfcLastWord(x);
    return 0;
}
