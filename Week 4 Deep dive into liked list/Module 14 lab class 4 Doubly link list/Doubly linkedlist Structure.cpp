#include<bits/stdc++.h>
using namespace std;


class node{
public:
    int data;
    node* next;
    node* prev;

};

class doublyLinkedList{
public:
    node* head;
    int size;

    doublyLinkedList()
    {
        head=NULL;
        size=0;
    }

    node* createNewNode(int value)
    {
        node* newnode=new node;
        newnode->data=value;
        newnode->next=NULL;
        newnode->prev=NULL;
        return newnode;
    }

    void InsertionAtHead(int value)
    {
        size++;
        node* newnode = createNewNode(value);
        if(head == NULL)
        {
            head = newnode;
            return;
        }
        node*a = head;
        newnode->next = a;
        a->prev = newnode;
        head = newnode;
    }


    int getsize()
    {
        return size;
    }

    void InsetAtAnyIndex(int index, int value)
    {

        if(index > size)
        {
            return;
        }
        if(index == 0)
        {
            InsertionAtHead(value);
            return;
        }

        node* a = head;
        int cur_idx = 0;

        while(cur_idx != index-1)
        {
            a = a->next;
            cur_idx++;
        }
        size++;
        node* newnode=createNewNode(value);
        newnode->next=a->next;
        newnode->prev=a;

        node* b = a->next;
        b->prev = newnode;
        a->next = newnode;

    }

    void Traverse()
    {
        node* a = head;
        if(a == NULL)
        {
            return;
        }
        while(a != NULL)
        {
            cout<<a->data<<" ";
            a = a->next;
        }
        cout<<"\n";
    }

    void DeleteIndex(int index)
    {
        node* a = head;
        int cur_idx = 0;
        if(index>size)
        {
            return;
        }
        while(cur_idx != index)
        {
            a = a->next;
            cur_idx++;
        }
        node* b = a->prev;
        node* c = a->next;

        if(b != NULL)
        {
            b->next = c;
        }
        if(c != NULL)
        {
            c->prev = b;
        }
        delete a;
        if(index==0)
        {
            head=c;
        }
        size--;
    }

    void ReverseList()
    {
        if(head==NULL)
        {
            return;
        }
        node* a = head;
        int cur_idx = 0;
        while(cur_idx != size-1)
        {
            a = a->next;
            cur_idx++;
        }
        node* b= head;
        while(b != NULL)
        {
            swap(b->next, b->prev);
            b = b->prev;
        }
        head=a;
    }

};
int main()
{
    doublyLinkedList dl;

    dl.InsertionAtHead(10);
    dl.InsertionAtHead(20);
    dl.InsertionAtHead(30);
    dl.InsertionAtHead(40);

    dl.Traverse();
    dl.InsetAtAnyIndex(2,100);
    dl.Traverse();

    dl.DeleteIndex(dl.getsize()-1);
    dl.Traverse();
    dl.ReverseList();
    dl.Traverse();
    cout<<"size = "<<dl.getsize()<<endl;
    return 0;
}
