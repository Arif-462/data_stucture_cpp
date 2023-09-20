#include<bits/stdc++.h>
using namespace std;

template<class T>
class Queue
{
public:
    T *a;
    int array_cap;
    int l,r,sz;

    Queue()
    {
        a=new T [1];
        array_cap = 1;
        l = 0;
        r = -1;
        sz = 0;
    }

    void remove_circular()
    {
        T *temp = new T[array_cap];
        int idx = 0;
        for(int i=0; i<array_cap; i++)
        {
            temp[idx] = a[i];
            idx++;
        }
        for(int i=0; i<r; i++)
        {
            temp[idx] = a[i];
            idx++;
        }
        swap(temp,a);
        l = 0;
        r = array_cap - 1;
    }

    void increase_size()
    {
        remove_circular();

        T *temp = new T[array_cap*2];
        for(int i=0; i<array_cap; i++)
        {
            temp[i] = a[i];
        }
        swap(a,temp);
        array_cap = array_cap - 1;
        delete []temp;
    }

    void enqueue(T value)

    {

        if(sz  == array_cap)

        {
            increase_size();
        }

        r++;

        if(r == array_cap)
        {
            r = 0;
        }
        a[r] = value;
        sz++;
    }

    void dequeue()
    {
        if(sz == 0)
        {
            cout<<"Queue is empty\n";
            return;
        }
        l++;
        if(l == array_cap)
        {
            l = 0;
        }
        sz--;
    }


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
    //Integer queue
    Queue<int> q;
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

    cout<<"Queue size is = "<<q.size()<<"\n";
    cout<<endl;

    //Character queue

    Queue<char> c;
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

