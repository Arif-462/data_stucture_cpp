#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s="abcd";
    string::iterator it;

    for( it=s.begin(); it != s.end(); it++)
    {
        cout<<*it<<endl;
    }

    for(string::iterator it=s.begin(); it != s.end(); it++)
    {
        cout<<*it<<endl;
    }
    //string::reverse_iterator it;
    for( string::reverse_iterator it=s.rbegin(); it != s.rend(); it++)
    {
        cout<<*it<<endl;
    }

     for( auto it=s.rbegin(); it != s.rend(); it++)
    {
        cout<<*it<<endl;
    }
    return 0;
}
