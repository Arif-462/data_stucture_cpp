#include<bits/stdc++.h>
using namespace std;
class node
{
public:
    int value;
    node* left;
    node* right;
    //node* parent;
};

class BST
{
public:
    node* root;

    BST()
    {
        root = NULL;
    }
    node* CreateNewnode(int value)
    {
        node* newnode = new node;
        newnode->value = value;
        newnode->left = NULL;
        newnode->right = NULL;
        return newnode;
    }

    void BFS()
    {
        if(root == NULL)
            return;
        queue<node*>q;
        q.push(root);

        while(!q.empty())
        {
            node* a = q.front();
            q.pop();
            int p = -1, l = -1, r= - 1;
            if(a->left != NULL)
            {
                l = a->left->value;
                q.push(a->left);
            }
            if(a->right != NULL)
            {
                r = a->right->value;
                q.push(a->right);
            }

            cout<<"Node value = "<<a->value<<" Left Child = "<<l;
            cout<<" Right Child = "<<r<<"\n";
        }
    }

    void Insert(int value)
    {
        node* newnode = CreateNewnode(value);

        if(root == NULL)
        {
            root = newnode;
            return;
        }
        node* cur = root;
        node* prv = NULL;

        while(cur != NULL)
        {
            if(newnode->value < cur->value)
            {
                prv = cur;
                cur = cur->left;
            }

            else
            {
                prv = cur;
                cur = cur->right;
            }
        }
        if(newnode->value < prv->value)
        {
            prv->left = newnode;
        }
        else
        {
            prv->right = newnode;
        }
    }

    bool Search(int value)
    {
        node* cur = root;

        while(cur != NULL)
        {
            if(cur->value > value)
            {
                cur = cur->left;
            }
            else if(cur->value < value)
            {
                cur = cur->right;
            }
            else
            {
                return true;
            }
        }
        return false;
    }

};

int main()
{
    BST bt;
    bt.Insert(10);
    bt.Insert(8);
    bt.Insert(5);
    bt.Insert(2);
    bt.Insert(12);
    bt.Insert(14);

    bt.BFS();

    cout<<endl;
    cout<<bt.Search(14)<<" ";
    cout<<bt.Search(15)<<" ";
    return 0;
}

