#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout<<"Enter any number for binary representation\n";
    int n;
    cin>>n;
    queue<string> q;
    q.push("1");
    for(int i=1; i<=n; i++)
    {
        cout<<i<<" -> "<<q.front()<<"\n";
        string temp = q.front();
        q.pop();
        q.push(temp+"0");
        q.push(temp+"1");
    }
    return 0;
}
