#include<bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node* next;
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

        return newnode ;
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
        a->next = head;
        head = a;
    }

    //found size of linked list
    int getSize()
    {
        int length=0;
        node* a = head;
        while(a != NULL)
        {
            length++;
            a = a->next;
        }
        return length;
    }

    //found value index.
    int getValue(int index)
    {
        node* a = head;
        int i = 0;
        while(a != NULL)
        {
            if(i == index)
            {
                return (a->data);
            }
            i++;
            a = a->next;
        }
        return -1;

    }

    //Print the linked list reverse order.
    void reverse(node* head)
    {
        node* a=head;
        if(a == NULL)
        {
            return ;
        }
        reverse(a->next);
        cout<<a->data<<" ";

    }

    void printReverse()
    {
        reverse(head);
        cout<<endl;
    }


    //swap first two value.
    void swapFirst()
    {
        node* a=head;
        while(a != NULL && a->next != NULL)
        {
            swap(a->data, a->next->data);
            return;
        }
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
};


int main()
{
    LinkedList l;

    cout<<l.getSize()<<"\n";
    l.InsetrtAtHead(5);
    cout<<l.getSize()<<"\n";
    l.InsetrtAtHead(6);
    l.InsetrtAtHead(30);
    cout<<l.getSize()<<"\n";
    l.InsetrtAtHead(20);
    l.InsetrtAtHead(30);

    cout<<l.getValue(2)<<"\n";

    cout<<l.getValue(6)<<"\n";

    l.printReverse();
    l.Traverse();
    l.swapFirst();
    l.Traverse();
    l.printReverse();

    return 0;
}



/*
#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node* nxt;
    Node(int value)
    {
        this->value = value;
        this->nxt = NULL;
    }
};

int getSize(Node* head)
{
    int length=0;
    Node* tmp = head;
    while(tmp != NULL)
    {
        length++;
        tmp = tmp->nxt;
    }
    return length;
}

int getValue(Node* head, int index)
{
    Node* tmp = head;
    int i = 0;
    while(tmp != NULL)
    {
        if(i == index)
        {
            return (tmp->value);
        }
        i++;
        tmp = tmp->nxt;
    }
    return -1;

}

void insertAtHead(Node* &head, int value)
{
    Node *newNode = new Node(value);
    if(head == NULL)
    {
        head = newNode;
        return;
    }
    newNode->nxt = head;
    head = newNode;

}

void printReverse(Node* head)
{
    if(head == NULL)
    {
        return;
    }
    printReverse(head->nxt);
    cout<<head->value<<" ";
}

void swapFirst(Node* head)
{
    Node* tmp=head;
    while(tmp != NULL && tmp->nxt != NULL)
    {
        swap(tmp->value, tmp->nxt->value);
        //tmp = tmp->nxt->nxt;
        //break;
        return;
    }
}


void Traverse(Node* head)
{
    if(head==NULL)
    {
        return;
    }
    while(head != NULL)
    {
        cout<<head->value<<" ";
        head = head->nxt;
    }
}

int main()
{
    Node* head = NULL;

    cout<<getSize(head)<<endl;
    insertAtHead(head, 5);
    cout<<getSize(head)<<endl;

    insertAtHead(head, 6);
    insertAtHead(head, 30);
    cout<<getSize(head)<<endl;

    insertAtHead(head, 20);
    insertAtHead(head, 30);
    cout<<getValue(head,2)<<endl;
    cout<<getValue(head,6)<<endl;

    printReverse(head);
    cout<<endl;

    Traverse(head);
    cout<<endl;

    swapFirst(head);

    Traverse(head);
    cout<<endl;
    printReverse(head);

    return 0;
}
//*/
