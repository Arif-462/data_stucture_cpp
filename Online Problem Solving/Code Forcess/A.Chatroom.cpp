#include<bits/stdc++.h>
using namespace std;
int main()
{



    string s;
    cin>>s;
    string ans;

    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='h' && ans.size()==0 )
            {
                ans.push_back('h');

            }
        else if(s[i]=='e' && ans.size()==1)
            {
                ans.push_back('e');

            }
        else if(s[i]=='l' && ans.size()==2)
            {
                ans.push_back('l');

            }
        else if(s[i]=='l' && ans.size()==3)
            {
                ans.push_back('l');

            }
        else if(s[i]=='o' && ans.size()== 4)
            {
                ans.push_back('o');

            }
    }

    //cout<<ans.size();
    if(ans.size() == 5)
    {
        cout<<"YES\n";
    }
    else
    {
        cout<<"NO\n";
    }
    return 0;
}
