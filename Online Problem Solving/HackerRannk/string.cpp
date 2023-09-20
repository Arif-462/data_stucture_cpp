#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;// = "abcd";
    string b;// = "ef";
    cin>>a>>b;
    int count1=0, count2=0;
    for(int i=1; i<=a.size(); i++)
    {
        count1++;
    }

    for(int i=1; i<=b.size(); i++)
    {
        count2++;
    }

    cout<<count1<<" "<<count2<<"\n";
    cout<<a+b<<"\n";
    for(int i=0; i<b.size(); i++)
    {
        cout<<b[i];
        break;
    }
    for(int i=1; i<a.size(); i++)
    {
        cout<<a[i];
    }
    cout<<" ";

    a.erase(1);
    b.erase(b.begin());
    cout<<a;
    cout<<b<<"\n";
    return 0;
}
