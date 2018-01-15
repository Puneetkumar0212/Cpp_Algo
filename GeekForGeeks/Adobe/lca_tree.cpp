//Lowest Common Ancestor in Binary Tree (not a binary search tree) 
#include<iostream>
using namespace std;

struct node
{
	node *left;
	node *right;
	int val;
	
};

node* newNode(int key)
{
	node *temp = new node;
	temp->val = key;
	temp->left = temp->right = NULL;
	return temp;
}

node *LCA(node *root , int n1 , int n2 , bool &v1 , bool &v2)
{
	if (root==NULL)
		return NULL;
	if(root->val==n1)
	{	v1=true;
		return root;
	}
	if(root->val==n2)
	{
		v2=true;
		return root;
	}

	node *left_lca = LCA(root->left, n1, n2, v1, v2);
	node *right_lca = LCA(root->right, n1, n2, v1, v2);

	if (left_lca && right_lca) 
		return root;
	
	return (left_lca != NULL)? left_lca: right_lca;


}

bool find(node *root, int k)
{
	
	if (root == NULL)
		return false;
	
	if (root->val == k || find(root->left, k) || find(root->right, k))
		return true;

	return false;
}

node *findLCA(node *root , int n1 , int n2)
{
	bool visit_n1 = false;
	bool visit_n2 = false;
	node *result = LCA(root,n1,n2,visit_n1,visit_n2);

	if (visit_n1 && visit_n2 || visit_n1 && find(result, n2) || visit_n2 && find(result, n1))
		return result;

	// Else return NULL
	return NULL;
}

int main()
{
	node *root = newNode(1);
	root->left = newNode(2);
	root->right = newNode(3);
	root->left->left = newNode(4);
	root->left->right = newNode(5);
	root->right->left = newNode(6);
	root->right->right = newNode(7);
	node *lca = findLCA(root, 4, 5);
	if (lca != NULL)
	cout << "LCA(4, 5) = " << lca->val;
	else
	cout << "Keys are not present ";

return 0;

}
