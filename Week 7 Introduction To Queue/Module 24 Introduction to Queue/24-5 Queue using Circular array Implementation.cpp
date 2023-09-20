#include<bits/stdc++.h>
using namespace std;

const int MAX_SIZE = 500;

class Queue
{

public:

    int a[MAX_SIZE];
    int l,r,sz;

    Queue()
    {
        l = 0;
        r = -1;
        sz = 0;
    }
    void enqueue(int value)
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
    int front()
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
    Queue q;
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

    return 0;
}

