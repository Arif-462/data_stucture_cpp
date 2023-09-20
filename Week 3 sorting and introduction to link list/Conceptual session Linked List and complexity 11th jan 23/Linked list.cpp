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

    insertAtHead(head, 10);
    insertAtHead(head, 20);
    insertAtHead(head, 30);
    insertAtHead(head, 40);
    insertAtHead(head, 50);
    insertAtHead(head, 60);

    //cout<<head->value<<" "<<head->nxt->value<<endl;
    display(head);


    return 0;
}
