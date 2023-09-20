#include<bits/stdc++.h>
using namespace std;
int main()
{
    deque<int>dq;
    dq.push_back(10);
    dq.push_back(20);
    dq.push_back(30);
    dq.push_back(40);
    dq.push_front(50);
    dq.push_front(60);

    cout<<dq.size()<<endl;
    cout<<dq.front()<<endl;
    cout<<dq.back()<<endl;

    dq.pop_back();
    dq.pop_front();

    cout<<dq.size()<<endl;
    cout<<dq.front()<<endl;
    cout<<dq.back()<<endl;
    return 0;
}
