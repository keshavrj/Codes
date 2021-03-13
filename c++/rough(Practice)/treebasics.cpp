#include<bits/stdc++.h>
using namespace std;

struct node{
int data;
struct node* right, *left;
    node(int val)
    {
        data=val;
        left=NULL;
        right=NULL;
    }
};

node* insert(node*  root, int val)
{
    if(root==NULL){
      root= new node(val);
        return root;
    }
    if(val <= root->data)
         root->left= insert(root->left, val);
    else
        root->right= insert(root->right, val);


    return root;
}



void inorder(struct node *root)
{ 
    if (root != NULL)
    {
        inorder(root->left);
        printf( "%d ", root->data );
        inorder(root->right);
        
    }
} 
int main() 
{
    
int a[]={1,20,45,11,35,2};
node* root=NULL;

for(int x:a){
    root=insert(root,x);
}

inorder(root);

return 0;
}


