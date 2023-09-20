#include<bits/stdc++.h>
using namespace std;
class node {
public:
    int value;
    node* nxt;
    node* prv;

};

class LinkedList {
public:
    node* head;
    node* tail;
    int sz;

    LinkedList() {
        head = NULL;
        tail = NULL;
        sz = 0;
    }

    node* CreateNewnode(int value) {
        node* newNode = new node;
        newNode->value = value;
        newNode->prv = NULL;
        newNode->nxt = NULL;

        return newNode;
    }

    void insertHead(int value) {
        sz++;
        node* newNode = CreateNewnode(value);

        if(head == NULL) {
            head = newNode;
            return;
        }
        node*a = head;
        newNode->nxt = a;
        a->prv = newNode;
        head = newNode;
    }

    void insertTail(int value) {
        sz++;
        node* newNode = CreateNewnode(value);

        if(head == NULL) {
            head = newNode;
            return;
        }
        node* a = head;
        while(a->nxt != NULL) {
            a = a->nxt;
        }
        a->nxt = newNode;
        newNode->prv = a;
    }

    void insertMid(int value) {
        node* a = head;
        int cur_idx = 0;

        while(cur_idx == (Size()/2)) {
            a = a->nxt;
            cur_idx++;
        }
        sz++;
        node* newNode = CreateNewnode(value);
        newNode->nxt = a->nxt;
        newNode->value = value;

        node* b = a->nxt;
        b->prv = newNode;
        a->nxt = newNode;


    }

    int Size() {
        //cout<<"Size Linked list is = "<<sz<<"\n";
        return sz;
    }


    void print() {
        node* a = head;
        node* b = tail;
        if(a == NULL && b ==NULL) {
            return;
        }
        while(a != NULL) {
            cout<<a->value<<" ";
            a = a->nxt;
        }
        while( b != NULL) {
            cout<<b->value<<" ";
            b = b->prv;
        }
        cout<<"\n";
    }

    void Merge(LinkedList a) {

        if(head == NULL) {
            head = a.head;
        }
        node* b = head;
        while(b->nxt != NULL) {
            b = b->nxt;
        }
        b->nxt = a.head;

    }

};

int main() {
    LinkedList a;
    LinkedList b;

    a.insertHead(1);
    a.insertTail(5);
    a.insertMid(3);
    a.insertHead(0);
    a.insertTail(10);
    a.print(); // prints  0 1 3 5 10

    b.insertHead(10);
    b.insertTail(50);
    b.insertMid(30);
    b.insertHead(9);
    b.insertTail(100);
    b.print(); // prints  9 10 30 50 100

    a.Merge(b);
    a.print(); // prints  0 1 3 5 10 9 10 30 50 100
    b.print(); // prints  9 10 30 50 100

    return 0;
}

