#include<bits/stdc++.h>
using namespace std;

class node
{
public:
    int data; //first node e value rakhar jonno.
    node* next; // next value er node point korar jonno.

};

class LinkedList
{
public:
    node* head;
    int sz;

    //constractor for point to head.
    LinkedList()
    {
        head = NULL;
        sz = 0;
    }

    //Creates a new node with data = value and next = NULL;
    node* CreateNewNode(int value)
    {
        node* newnode = new node;
        newnode->data = value;
        newnode->next = NULL;
        return newnode;

        delete newnode;
    }

    //Insert new value at head.
    void InsetrtAtHead(int value)
    {
        sz++;
        node* a = CreateNewNode(value);
        if(head == NULL)
        {
            head = a;
            return;
        }

        // if head is not NULL
        a->next = head;
        head = a;
    }

    void insetrtAtAnyIndex(int value, int index)
    {
        if(index<0 ||index>sz)
        {
            return ;
        }
        if(index==0)
        {
            InsetrtAtHead(value);
            return;
        }

        node* a=head;
        int cur_index=0;
        while(cur_index!=index-1)
        {
            a=a->next;
            cur_index++;
        }
        node* newNode=CreateNewNode(value);
        newNode->next=a->next;
        a->next=newNode;
        sz++;
    }

    void DeleteAtHead()
    {
        if(head==NULL)
            return;
        node* a = head;
        head = a->next;
        delete a;
        sz--;

    }

    void DeleteAnyIndex(int index)
    {
        if(index<0 || index>sz)
            return;
        int cur_index=0;
        if(index==0)
        {
            DeleteAtHead();
            return ;
        }
        node* a= head;
        while(cur_index!=index-1)
        {
            a=a->next;
            cur_index++;
        }
        node* b = a->next;
        a->next = b->next;
        delete b;
        sz--;
    }

    //Print the linked list.
    void Traverse()
    {
        node* a = head;
        while(a != NULL)
        {
            cout<<a->data<<" ";
            a = a->next;
        }
        cout<<"\n";

    }

    // Search for a single value.
    int SearchDistinctValue(int value)
    {
        node* a = head;
        int index = 0;
        while(a != NULL)
        {
            if(a->data==value)
            {
                return index;
            }
            a = a->next;
            index++;
        }
        return -1;
    }

    //Search all posible occurence.
    void SearchAllValue(int value)
    {
        node* a = head;
        int index = 0;
        while(a != NULL)
        {
            if(a->data == value)
            {
                cout<<value<<" is found at index "<<index<<"\n";
            }
            a = a->next;
            index++;
        }

    }
    int getSize()
    {
//        node* a=head;
//        int size=0;
//        while(a != NULL)
//        {
//            size++;
//            a=a->next;
//        }

        return sz;
    }


};
int main()
{
    LinkedList l;

    // l.Traverse();

    l.InsetrtAtHead(6);
    // l.Traverse();

    l.InsetrtAtHead(16);
    // l.Traverse();
    l.InsetrtAtHead(4);
    l.Traverse();

    cout<<"size = "<<l.getSize()<<endl;

    l.insetrtAtAnyIndex(100, 0);

    l.InsetrtAtHead(2);

    l.Traverse();
    cout<<"size = "<<l.getSize()<<endl;

    l.DeleteAtHead();
    //l.Traverse();

    //l.InsetrtAtHead(99);

    l.Traverse();
    l.DeleteAnyIndex(2);
    // l.SearchAllValue(30);

    l.Traverse();
    cout<<"size = "<<l.getSize()<<endl;

    return 0;
}

