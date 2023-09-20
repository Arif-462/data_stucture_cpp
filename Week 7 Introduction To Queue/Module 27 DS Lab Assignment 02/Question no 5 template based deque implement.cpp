#include<bits/stdc++.h>
using namespace std;

template<class T>

class node{
public:
    T data;
    node<T>* next;
    node<T>* prev;
};

template<class T>

class Deque{
public:
    node<T>* head;
    node<T>* tail;
    int sz;

    Deque()
    {
        head = NULL;
        tail = NULL;
        sz = 0;
    }
    node<T>* CreateNewnode(T value)
    {
        node<T>* newnode = new node<T>;
        newnode->data = value;
        newnode->next = NULL;
        newnode->prev = NULL;
        return newnode;
    }

    void push_back(T value)
    {
        node<T>* newnode = CreateNewnode(value);
        if(sz==0)
        {
            head = newnode;
            tail = newnode;
            sz++;
            return;
        }
        tail->next=newnode;
        newnode->prev = tail;
        tail=newnode;
        sz++;
    }

    void push_front(T value)
    {
        node<T>* newnode = CreateNewnode(value);
        if(sz==0)
        {
           head = newnode;
           tail = newnode;
           sz++;
        }
        head->prev= newnode;
        newnode->next = head;
        head = newnode;
        sz++;
    }

    //second part - 02
    void pop_back()
    {
        if(sz==0)
        {
            cout<<"Deque is empty!\n";
            return;
        }
        if(sz==1)
        {
            delete tail;
            head=NULL;
            tail=NULL;
            sz--;
            return;
        }
        node<T>* a = tail;
        tail = tail->prev;
        delete a;
        sz--;
        tail->next = NULL;
    }

    void pop_front()
    {
        if(sz==0)
        {
            cout<<"Deque is empty!\n";
            return;
        }
        if(sz==1)
        {
            delete head;
            head=NULL;
            tail=NULL;
            sz--;
            return;
        }
        node<T>* a = head;
        head = head->next;
        delete a;
        sz--;
        head->prev = NULL;
    }

    T front()
    {
        if(sz==0)
        {
            cout<<"Deque is empty\n";
            return -1;
        }
        return head->data;
    }

    T back()
    {
        if(sz==0)
        {
            cout<<"Deque is empty\n";
            return -1;
        }
        return tail->data;
    }

    int size()
    {
        return sz;
    }

};
int main()
{
    Deque<double> dq;

    dq.push_back(1.5);
    dq.push_back(3.5);
    dq.push_back(8.69);

    cout<<"Size: "<<dq.size()<<"\n";
    cout<<"back : "<<dq.back()<<" Front : "<<dq.front()<<"\n";

    dq.push_front(20);
    dq.push_back(40);
    cout<<"back : "<<dq.back()<<" Front : "<<dq.front()<<"\n";

    cout<<"Size: "<<dq.size()<<"\n";

    dq.pop_front();
    dq.pop_back();

    cout<<"back : "<<dq.back()<<" Front : "<<dq.front()<<"\n";
    cout<<"Size: "<<dq.size()<<"\n";

    cout<<endl;
    //Character dequeue
    Deque<char> c;
    c.push_back('a');
    c.push_back('b');
    c.push_back('c');

    cout<<"Size: "<<c.size()<<"\n";
    cout<<"back : "<<c.back()<<" Front : "<<c.front()<<"\n";

    c.push_front('d');
    c.push_back('f');
    cout<<"back : "<<c.back()<<" Front : "<<c.front()<<"\n";

    cout<<"Size: "<<c.size()<<"\n";

    c.pop_front();
    c.pop_back();

    cout<<"back : "<<c.back()<<" Front : "<<c.front()<<"\n";
    cout<<"Size: "<<c.size()<<"\n";

    return 0;
}

