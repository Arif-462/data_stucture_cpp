#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int value;
    Node* nxt;
    Node(int value)
    {
        this->value = value;
        this->nxt = NULL;
    }
};

void insertAtTail(Node* &head, int value)
{
    Node *newNode = new Node(value);
    if(head == NULL)
    {
        head = newNode;
        return;
    }
    Node* tmp = head;
    while(tmp->nxt != NULL)
    {
        tmp = tmp->nxt;
    }
    tmp->nxt = newNode;
    //newNode = head;

}

void display(Node* head)
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

    insertAtTail(head, 10);
    insertAtTail(head, 20);
    insertAtTail(head, 30);
    insertAtTail(head, 40);
    insertAtTail(head, 50);
    insertAtTail(head, 60);
    insertAtTail(head, 70);
    insertAtTail(head, 80);


    display(head);

    return 0;
}

