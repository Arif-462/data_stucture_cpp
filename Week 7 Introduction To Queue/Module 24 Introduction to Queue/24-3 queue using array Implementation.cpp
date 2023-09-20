#include<bits/stdc++.h>
using namespace std;

const int MAX_SIZE = 100;

class Queue{
public:
    int a[MAX_SIZE];
    int l,r,sz;

    Queue()
    {
        l = 0;
        r = -1;
        sz = 0;
    }
    //tc=O(1)
    void enqueue(int value)
    {

        if(r+l >= MAX_SIZE)
        {
            cout<<"Queue is full\n";
            return;
        }
        r++;
        a[r] = value;
        sz++;
    }

    void dequeue()
    {
        if(l>r)
        {
            cout<<"Queue is empty\n";
            return;

        }
        l++;
        sz--;
    }

    int front()
    {
        if(l>r)
        {
            cout<<"Queue is empty\n";
            return -1;
        }
        return a[l];
    }

    int size()
    {
        //return (r-l+1);
        return sz;
    }

};


int main()
{
    Queue q;
    q.enqueue(5);
    q.enqueue(6);
    q.enqueue(7);

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

