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
class Dequeu{
public:
    node<T>* head;
    node<T>* tail;
    int sz;

    Dequeu()
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
        //newnode->next=NULL;
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


    //second part -02

    void pop_back()
    {
        if(sz==0)
        {
            cout<<"Dewqueu is empty!\n";
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
            cout<<"Dewqueu is empty!\n";
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
            cout<<"Dequeu is empty\n";
            return -1;
        }
        return head->data;
    }

    T back()
    {
        if(sz==0)
        {
            cout<<"Dequeue is empty\n";
            return -1;
        }
        return tail->data;
    }

    int size()
    {
        return sz;
    }

    T maxx()
    {
        if(sz==1)
        {
           return head->data;
        }
        T a = max(head->data, head->next->data);
        head = head->next;
        return a;
    }

    T minn()
    {
        if(sz==1)
        {
           return head->data;
        }
        T a = min(head->data, head->next->data);
        head = head->next;
        return a;
    }

};
int main()
{
    Dequeu<double> dq;
    dq.push_back(5);
    dq.push_back(3);
    dq.push_back(8);
    dq.push_front(25);

    cout<<"Size: "<<dq.size()<<"\n";
    cout<<"back : "<<dq.back()<<" Front : "<<dq.front()<<"\n";


    cout<<"back : "<<dq.back()<<" Front : "<<dq.front()<<"\n";

    cout<<"Size: "<<dq.size()<<"\n";

    //dq.pop_front();
    //dq.pop_back();

    cout<<"back : "<<dq.back()<<" Front : "<<dq.front()<<"\n";
    cout<<"Size: "<<dq.size()<<"\n";

    cout<<dq.maxx()<<endl;
    cout<<dq.minn()<<endl;


    return 0;
}

