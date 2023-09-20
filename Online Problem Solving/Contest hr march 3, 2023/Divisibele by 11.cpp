#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;

    int ev_sum=0;
    int odd_sum=0;
    for(int i=s.size()-1; i>=0; i--)
    {
        if((s.size()-i)%2==0)
        {

            ev_sum = ev_sum + s[i]-'0';
        }
        else
        {

            odd_sum = odd_sum+s[i]-'0';
        }
    }

    int dif = abs(odd_sum-ev_sum);
    if(dif%11==0)
    {
        cout <<"YES\n";
    }
    else
    {
        cout<<"NO\n";
    }

    return 0;
}
