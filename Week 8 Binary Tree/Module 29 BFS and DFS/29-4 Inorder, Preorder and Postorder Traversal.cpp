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
    node* allnode[6];

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

    node* Build_BinaryTree()
    {

        for(int i=0; i<6; i++)
        {
            allnode[i] = CreateNewnode(i);
        }

        allnode[0]->left = allnode[1];
        allnode[0]->right = allnode[2];

        allnode[1]->left = allnode[5];
        allnode[1]->parent = allnode[0];

        allnode[2]->left = allnode[3];
        allnode[2]->right = allnode[4];
        allnode[2]->parent = allnode[0];

        allnode[5]->parent = allnode[1];

        allnode[3]->parent = allnode[2];
        allnode[4]->parent = allnode[2];

        root = allnode[0];
        return 0;
    }

    void BFS()
    {
        queue<node*>q;
        q.push(root);

        while(!q.empty())
        {
            node* a = q.front();
            q.pop();
            int p =-1, l =-1, r=-1;

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
            // parentk push korbo na
            if(a->parent != NULL)
            {
                p = a->parent->id;

            }

            cout<<"Node id = "<<a->id<<" left child = "<<l;
            cout<<" right child = "<<r<<" Parent id = "<<p<<"\n";
        }
    }

    void DFS(node* a)
    {
        if(a == NULL)
        {
            return;
        }
        cout<<a->id<<" ";
        DFS(a->left);
        DFS(a->right);
    }

    void Inorder(node* a)
    {
        if(a == NULL)
        {
            return;
        }
        Inorder(a->left);
        cout<<a->id<<" ";
        Inorder(a->right);
    }

    void Preorder(node* a)
    {
        if(a == NULL)
        {
            return;
        }
        cout<<a->id<<" ";
        Preorder(a->left);
        Preorder(a->right);

    }

    void Postorder(node* a)
    {
        if(a==NULL)
        {
            return;
        }

        Preorder(a->left);
        Preorder(a->right);
        cout<<a->id<<" ";
    }

};

int main()
{
    BinaryTree bt;

    bt.Build_BinaryTree();
    bt.BFS();

    //bt.DFS(bt.root);

    //bt.Inorder(bt.root);

   //bt.Preorder(bt.root);

   //bt.Postorder(bt.root);

    return 0;
}

