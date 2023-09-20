#include<bits/stdc++.h>
using namespace std;
class Node{
public:
    double value;
    char ch;
    Node* next;
    Node* next_to_next;
};
class LinkedList{
public:
    Node* head;
    int sz;

    LinkedList()
    {
        head = NULL;
        sz = 0;
    }
    Node* CreateNewnode(double value, char ch)
    {
        Node* newnode = new Node;
        newnode->value = value;
        newnode->ch = ch;
        newnode->next = NULL;
        newnode->next_to_next = NULL;
        return newnode;
    }

    void InsetrtAtHead(double value, char ch)
    {
        sz++;
        Node* newnode = CreateNewnode(value, ch);
        if(head == NULL)
        {
            head = newnode;
            return;
        }

        // if head is not NULL
        newnode->next = head;
        head = newnode;
    }
    void Traverse()
    {
        Node* newnode = head;
        while(newnode != NULL)
        {
            cout<<newnode->value<<" "<<newnode->ch<<"     ";
            newnode = newnode->next;
        }
        cout<<"\n\n";
    }
    void Size()
    {
        cout<<sz<<"\n";
    }

};
int main()
{
    LinkedList l;
    l.InsetrtAtHead(2.5,'a');
    l.InsetrtAtHead(3.6,'b');
    l.InsetrtAtHead(2.7,'c');
    l.Traverse();
    cout<<"Size of list = ";
    l.Size();
    return 0;
}
