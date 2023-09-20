#include<bits/stdc++.h>
using namespace std;

class node
{
public:
    int id;
    node* left;
    node* right;
    node* parent;
};

class BinaryTree
{
public:
    node* root;
    //node* allnode[7];

    BinaryTree()
    {
        root = NULL;
    }

    node* CreateNewnode(int id)
    {
        node* newnode = new node;
        newnode->id = id;
        newnode->left = NULL;
        newnode->right = NULL;
        newnode->parent = NULL;
        return newnode;
    }

//    node* Build_BinaryTree()
//    {
//        for(int i=0; i<7; i++)
//        {
//            allnode[i] = CreateNewnode(i);
//        }
//
//        allnode[0]->left = allnode[1];
//        allnode[0]->right = allnode[2];
//
//        allnode[1]->left = allnode[5];
//        allnode[1]->right = allnode[6];
//        allnode[1]->parent = allnode[0];
//
//        allnode[2]->left = allnode[3];
//        allnode[2]->right = allnode[4];
//        allnode[2]->parent = allnode[0];
//
//        allnode[5]->parent = allnode[1];
//        allnode[6]->parent = allnode[1];
//
//        allnode[3]->parent = allnode[2];
//        allnode[4]->parent = allnode[2];
//
//        root = allnode[0];
//        return root;
//    }
    void Insertion(int id)
    {
        node* newnode = CreateNewnode(id);
        if(root == NULL)
        {
            root = newnode;
            return;
        }
        queue<node*>q;
        q.push(root);

        while(!q.empty())
        {
            node* a = q.front();
            q.pop();

            if(a->left != NULL)
            {
                q.push(a->left);
            }
            else
            {
                a->left = newnode;
                newnode->parent = a;
                return;
            }
            if(a->right != NULL)
            {
                q.push(a->right);
            }
            else
            {
                a->right = newnode;
                newnode->parent = a;
                return;
            }

        }
    }

    void BFS()
    {
        node* a = root;
        if(root==NULL)
        {
            cout<<"The tree is empty\n";
            return;
        }
        queue<node*>q;
        q.push(root);

        while(!q.empty())
        {
            node* a = q.front();
            q.pop();

            int p = -1;
            int l = -1;
            int r = -1;

            if(a->left != NULL)
            {
                l = a->left->id;
                q.push(a->left);
            }
            if(a->right != NULL)
            {
                r = a->right->id;
                q.push(a->right);
            }
            if(a->parent != NULL)
            {
                p = a->parent->id;
            }
            cout<<"Node id = "<<a->id<<" Left child = "<<l;
            cout<<" Right child = "<<r<<" Parent is = "<<p<<"\n";
        }
    }
};

int main()
{
    BinaryTree bt;
    bt.Insertion(0);
    bt.Insertion(1);
    bt.Insertion(2);
    bt.Insertion(3);
    bt.Insertion(4);
    bt.Insertion(5);
    bt.Insertion(6);

    //bt.Build_BinaryTree();

    bt.BFS();

    return 0;
}

