#include<bits/stdc++.h>
using namespace std;

class node{
public:
    int data; //first node e value rakhar jonno.
    node *next; // next value er node point korar jonno.

};

class LinkedList{
public:
    node *head;
    //constractor for point to head.
    LinkedList()
    {
        head=NULL;
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
    void insetrtAtHead(int value)
    {
        node* a = CreateNewNode(value);
        if(head == NULL)
        {
            head = a;
            return;
            // if head != NULL

            a->next = head;
            head = a;
        }

    }
    //Print the linked list.
    void traverse()
    {

    }
    // Search far a single value.
    void searchDistinctValue(int value)
    {

    }
    //Search all posible occurence.
    void searchAllValue(int value)
    {

    }



};
int main()
{
    LinkedList l;

    l.insetrtAtHead(10);
    l.insetrtAtHead(20);
    l.insetrtAtHead(30);
    l.insetrtAtHead(30);

    l.traverse();

    l.searchDistinctValue(10);

    l.searchDistinctValue(5);

    l.searchAllValue(30);

    return 0;
}

