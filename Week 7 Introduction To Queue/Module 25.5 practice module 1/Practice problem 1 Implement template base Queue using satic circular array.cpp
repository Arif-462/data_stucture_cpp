#include<bits/stdc++.h>
using namespace std;

const int MAX_SIZE = 10;
template<class T>
class Queue
{

public:

    T a[MAX_SIZE];
    int l,r,sz;

    Queue()
    {
        l = 0;
        r = -1;
        sz = 0;
    }
    void enqueue(T value)
    //tc=O(1)
    {

        if(sz  == MAX_SIZE)

        {
            cout<<"Queue is full\n";
            return;
        }

        r++;

        if(r == MAX_SIZE)
        {
            r = 0;
        }
        a[r] = value;
        sz++;
    }

    //tc=O(1)
    void dequeue()
    {
        if(sz == 0)
        {
            cout<<"Queue is empty\n";
            return;
        }
        l++;
        if(l==MAX_SIZE)
        {
            l=0;
        }
        sz--;
    }

    //tc=O(1)
    T front()
    {
        if(sz == 0)
        {
            cout<<"Queue is empty\n";
            return 0;
        }

        return a[l];
    }

    //tc=O(1)
    int size()
    {
        //return (r-l+1);
        return sz;
    }

};


int main()
{
    Queue<int>q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);

    cout<<"Queue size is = "<<q.size()<<'\n';

    cout<<q.front()<<'\n';
    q.dequeue();
    cout<<q.front()<<'\n';
    q.dequeue();
    cout<<q.front()<<'\n';
    q.dequeue();

    cout<<"Queue size is = "<<q.size()<<'\n';

    // character q
    Queue<char>c;

    c.enqueue('a');
    c.enqueue('b');
    c.enqueue('c');

    cout<<"Queue size is = "<<c.size()<<'\n';

    cout<<c.front()<<'\n';
    c.dequeue();
    cout<<c.front()<<'\n';
    c.dequeue();
    cout<<c.front()<<'\n';
    c.dequeue();

    cout<<"Queue size is = "<<c.size()<<'\n';
    return 0;
}

