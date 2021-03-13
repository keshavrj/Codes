#include<bits/stdc++.h>
using namespace std;
struct Node
{
    struct Node *left;
    int data;
    struct Node *right;
}*root;
int BStreemin(Node x)//root
{
    if(x.left==NULL)
        return x;
    return BStreemin(x.left);
}
int BStreemax(Node x)//root
{
    if(x.right==NULL)
        return x;
    return BStreemax(x.right);
}
int TREESUCCESSOR(Node *x)
{
 if(x->right)
     return BStreemin(x->right)
 Node* y = x->parent
 while (y != NULL && x == y->right)
   {x = y
   y = y->p}
 return y
}
void treecreate()
{
    Node *p, *t;
    int x;
    queue<Node *> q;
    printf("Enter Root value : ");
    cin>>x;
    root= new Node;
    root->data=x;
    root->left= root->right= NULL;
    q.push(root);
    while(!q.empty())
    {
        p=q.front();
        q.pop();
        cout<<"\nEnter left child of "<<p->data<<" : ";
        cin>>x;
        if(x!=-1)
        {
            t= new Node;
            t->data= x;
            t->left = t->right = 0;
            p-> left = t;
            q.push(t);
        }

        cout<<"\nEnter Right child of "<<p->data<<": ";
        cin>>x;
        if(x!=-1)
        {
            t= new Node;
            t->data= x;
            t->left = t->right = 0;
            p-> right = t;
            q.push(t);
        }
    }

}
void preorder(struct Node *p)
{
    if(p)
    {
        cout<<p->data<<" ";
        preorder(p->left);
        preorder(p->right);
    }
}
void postorder(struct Node *p)
{
    if(p)
    {
        postorder(p->left);
        postorder(p->right);
        cout<<p->data<<" ";
    }
}

void inorder(struct Node *p)
{
    if(p)
    {
        inorder(p->left);
        cout<<p->data<<" ";
        inorder(p->right);
    }
}
void levelorder()
{
    cout<<" ";
}
int main()
{
    treecreate();
    cout<<"\n PreOrder: ";  preorder(root);
    cout<<"\n InOrder: "; inorder(root);
    cout<<"\n PostOrder: "; postorder(root);
}
