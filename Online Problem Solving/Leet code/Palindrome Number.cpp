#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    bool isPalindrome(int x)
    {

        string s = to_string(x);
        int left = 0;
        int right = s.length()-1;
        while(left<right)
        {
            if(s[left] != s[right])
            {
                return false;
            }
            left++;
            right--;
        }
        return true;

    }

};

int main()
{
   Solution s;

    int x;
    cin>>x;

    if(s.isPalindrome(x))
    {
        cout<<"true\n";
    }
    else
    {
        cout<<"false\n";
    }
    return 0;
}
