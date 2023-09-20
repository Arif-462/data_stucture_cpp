#include<bits/stdc++.h>
using namespace std;

int main()
{
    string y,x;
    cin>>y;
    cin>>x;

    int ans=0;
    for(int i=0; i<4; i++)
    {
        if(y[i]!=x[i] && y<x)
        {
            ans = 1;
        }
        else
        {
            ans=0;
        }
    }

    if(ans==1)
    {
        cout<<2013<<"\n";
    }
    else
    {
        cout<<2013+1<<"\n";
    }

}
