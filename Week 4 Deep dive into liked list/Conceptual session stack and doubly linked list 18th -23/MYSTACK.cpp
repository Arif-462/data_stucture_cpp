//#include<bits/stdc++.h>
////using namespace std;


/*
 STL stack of c++ our function
*/

//class node{
//public:
//    int data;
//    node* next;
//    node* prv;
//
//    node(int value)
//    {
//        data=value;
//        next=NULL;
//        prv = NULL;
//    }
//};
//
//class Stack{
//    public:
//    node* head;
//    node* top;
//    int size=0;
//
//    Stack()
//    {
//        head=NULL;
//        top=NULL;
//    }
//
//    void PUSH(int value)
//    {
//        size++;
//        node* newNode = new node(value);
//        if(head==NULL)
//        {
//            head=newNode;
//            top = newNode;
//            return;
//        }
//        top->next=newNode;
//        newNode->prv=top;
//        top=newNode;
//    }
//
//    void POP()
//    {
//        node* delNode=top;
//        if(top==head)
//        {
//            head=top=NULL;
//        }
//        else{
//            top=delNode->prv;
//            top->next=NULL;
//        }
//
//        delete delNode;
//        size--;
//    }
//
//    int TOP()
//    {
//        return top->data;
//    }
//
//    int Size()
//    {
//        return size;
//    }
//
//    bool EMPTY()
//    {
//        if(size==0)
//        {
//            return true;
//        }
//        else
//        {
//            return false;
//        }
//    }
//
//};

#include<bits/stdc++.h>
#include"MYSTACK.h"
int main()
{
    Stack numst;
    numst.PUSH(10);
    numst.PUSH(20);
    numst.PUSH(30);
    numst.PUSH(40);
    numst.PUSH(50);
    numst.PUSH(60);
    numst.PUSH(70);
    numst.PUSH(80);
    //numst.POP();
    cout<<numst.TOP()<<"\n";
    cout<<numst.Size()<<"\n";
    cout<<numst.EMPTY();
    return 0;
}

