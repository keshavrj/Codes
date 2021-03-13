#include<bits/stdc++.h>
using namespace std;
void inorder(Node *root)
{
	if(root==NULL)
		return;
	stack<Node* > st;
	Node *temp= root;
	while( !st.empty() || temp!=NULL )
	{
		if(temp)
			{
				st.push(temp);
				temp=temp->left;
			}
		else
		{
			temp= st.top();
			cout<<temp->data<<" ";
			st.pop();
			temp=temp->right;
		} 

	}

}


void preoder(Node *root)
{
	if(!root)return;
	stack<Node*> st;
	st.push(root);
	while(!st.empty())
	{
		Node* temp= st.top();
		st.pop();
	
		cout<<temp->data<<" ";

		if(temp->right)
			st.push(temp->right); //FILO order that's why right node is pushed first;
		if(temp->left)
			st.push(temp->left);
	}


}

void postorder(Node *root)
{
	stack<Node* > st;
	st.push(root);
	stack<int> ans;
	while(!st.empty())
	{
		Node* temp= st.top;
		st.pop();
		ans.push(temp->data);
		if(temp->left)
			st.push(temp->left);
		if(temp->right)
			st.push(temp->right);

	}

	while(!ans.empty())
	{
		cout<<ans.top()<<" ";
		ans.pop();
	}

}



int main()
{
  /*


  */  

return 0;
}