#include<bits/stdc++.h>
using namespace std;

bool is_palindrome(string a)
{
    deque<char> dq;

    for (int i = 0; i < a.size(); i++)
    {
        dq.push_back(a[i]);
    }

    bool palindrome = true;

    while (dq.size() > 1 && palindrome)
    {
        char first = dq.front();
        dq.pop_front();
        char last = dq.back();
        dq.pop_back();
        if (first != last)
        {
            palindrome = false;
        }
    }
    return palindrome;
}

int main()
{
    string s;
    cin>>s;
    if(is_palindrome(s)==1)
    {
        cout<<"Yes\n";
    }
    else
    {
        cout<<"No\n";
    }

    return 0;
}
