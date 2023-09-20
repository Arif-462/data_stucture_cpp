#include<bits/stdc++.h>
using namespace std;

class node{
public:
    int data;
    node* next;
    node* prev;

};
class Dequeu{
public:
    node* head;
    node* tail;
    int sz, rev;

    Dequeu()
    {
        head = NULL;
        tail = NULL;
        sz = 0;
        rev = 0;
    }
    node* CreateNewnode(int value)
    {
        node* newnode = new node;
        newnode->data = value;
        newnode->next = NULL;
        newnode->prev = NULL;
        return newnode;
    }

    void InsertAtTail(int value)
    {
        node* newnode = CreateNewnode(value);
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

    void push_back(int value)
    {
//        node* newnode = CreateNewnode(value);
//        if(sz==0)
//        {
//            head = newnode;
//            tail = newnode;
//            sz++;
//            return;
//        }
//        tail->next=newnode;
//        newnode->prev = tail;
//        //newnode->next=NULL;
//        tail=newnode;
//        sz++;


        if(rev=0)
        {
            InsertAtTail(value);
        }
        else
        {
            InsertAtHead(value);
        }
    }

    void InsertAtHead(int value)
    {
         node* newnode = CreateNewnode(value);
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

    void push_front(int value)
    {
        if(rev=0)
        {
            InsertAtHead(value);
        }
        else
        {
            InsertAtTail(value);
        }
//        node* newnode = CreateNewnode(value);
//        if(sz==0)
//        {
//           head = newnode;
//           tail = newnode;
//           sz++;
//        }
//        head->prev= newnode;
//        newnode->next = head;
//        head = newnode;
//        sz++;

    }


    //second part -02
    void delete_last()
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
        node* a = tail;
        tail = tail->prev;

        delete a;
        sz--;
        tail->next = NULL;
    }
    void pop_back()
    {
        if(rev==0)
        {
            delete_last();
        }
        else{
            delete_first();
        }

//        if(sz==0)
//        {
//            cout<<"Dewqueu is empty!\n";
//            return;
//        }
//        if(sz==1)
//        {
//            delete tail;
//            head=NULL;
//            tail=NULL;
//            sz--;
//            return;
//        }
//        node* a = tail;
//        tail = tail->prev;
//
//        delete a;
//        sz--;
//        tail->next = NULL;
    }


    void delete_first()
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
        node* a = head;
        head = head->next;
        delete a;
        sz--;
        head->prev = NULL;
    }

    void pop_front()
    {
        if(rev==0)
        {
            delete_first();
        }
        else{
            delete_last();
        }
//        if(sz==0)
//        {
//            cout<<"Dewqueu is empty!\n";
//            return;
//        }
//        if(sz==1)
//        {
//            delete head;
//            head=NULL;
//            tail=NULL;
//            sz--;
//            return;
//        }
//        node* a = head;
//        head = head->next;
//        delete a;
//        sz--;
//        head->prev = NULL;
    }

    int front()
    {
        if(sz==0)
        {
            cout<<"Dequeu is empty\n";
            return -1;
        }
        if(rev==0)
        {
            return tail->data;
        }
        else{
            return head->data;
        }
        //return head->data;
    }

    int back()
    {
        if(sz==0)
        {
            cout<<"Dequeue is empty\n";
            return -1;
        }
        if(rev==0)
        {
            return head->data;
        }
        else{
            return tail->data;
        }
        //return tail->data;
    }

    int size()
    {
        return sz;
    }

    // dequeue reverse
    void Reverse_dequeu()
    {
        if(rev==0)
        {
            rev = 1;
        }

        else{
            rev = 0;
        }

    }


};
int main()
{
    Dequeu dq;
    dq.push_back(1);
    dq.push_back(3);
    dq.push_back(8);
    dq.push_front(48);
    dq.Reverse_dequeu();
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

    return 0;
}
