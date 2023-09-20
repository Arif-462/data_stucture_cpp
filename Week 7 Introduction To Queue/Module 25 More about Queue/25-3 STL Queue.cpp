#include<bits/stdc++.h>
using namespace std;

int main()
{
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);

    cout<<"Q size = "<<q.size()<<"\n";
     cout<<q.empty()<<"\n";

    cout<<q.front()<<"\n";
    q.pop();

    cout<<q.front()<<"\n";
    q.pop();

    cout<<q.front()<<"\n";
    q.pop();

    cout<<"Q size = "<<q.size()<<"\n";
    cout<<q.empty()<<"\n";

    // character queue

    queue<char> c;
    c.push('a');
    c.push('b');
    c.push('c');

    cout<<"Q size = "<<c.size()<<"\n";
     cout<<c.empty()<<"\n";

    cout<<c.front()<<"\n";
    c.pop();

    cout<<c.front()<<"\n";
    c.pop();

    cout<<c.front()<<"\n";
    c.pop();

    cout<<"Q size = "<<c.size()<<"\n";
    cout<<c.empty()<<"\n";
    return 0;
}
