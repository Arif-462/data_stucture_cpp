#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<char>s({'c','o','d','e','f','o','r','c','e','s'});
    for(int i=0; i<n; i++)
    {
        int ok=0;
        for(int j=0; j<n; j++)
        {

            char ch;
            cin>>ch;
            if(ch==s[i])
            {
                ok=1;
            }
            ok=0;

        }

        if(ok==1)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
    }


    return 0;
}
