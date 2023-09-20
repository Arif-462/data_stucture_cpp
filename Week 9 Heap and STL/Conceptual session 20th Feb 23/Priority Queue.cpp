#include<bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue<int>pq;
    pq.push(4);
    pq.push(5);
    pq.push(2);
    pq.push(9);
    pq.push(8);
    cout<<pq.size()<<"\n";
    while(!pq.empty())
    {
        cout<<pq.top()<<" ";
        pq.pop();
    }
    cout<<pq.size()<<"\n";
    return 0;
}


