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

    //constractor for point to head.
    LinkedList()
    {
        head = NULL;
    }

    //Creates a new node with data = value and next = NULL;
    node* CreateNewNode(int value)
    {
        node* newnode = new node;
        newnode->data = value;
        newnode->next = NULL;
        return newnode;
    }

    //Insert new value at head.
    void InsetrtAtHead(int value)
    {
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

    // Search far a single value.
    int SearchDistinctValue(int value)
    {


    }

    //Search all posible occurence.
    void SearchAllValue(int value)
    {


    }

};
int main()
{
    LinkedList l;

    l.Traverse();

    l.InsetrtAtHead(10);
    l.Traverse();

    l.InsetrtAtHead(30);
    l.Traverse();

    l.InsetrtAtHead(20);
    l.Traverse();

    l.InsetrtAtHead(30);
    l.Traverse();


    l.SearchDistinctValue(10);
    l.SearchDistinctValue(5);
    l.SearchDistinctValue(20);


    l.SearchAllValue(30);

    return 0;
}

