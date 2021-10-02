// C++ Program to find diagonal
// sum in a Binary Tree
#include <bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	struct Node* left;
	struct Node* right;
};

struct Node* newNode(int data)
{
	struct Node* Node =
			(struct Node*)malloc(sizeof(struct Node));
	
	Node->data = data;
	Node->left = Node->right = NULL;

	return Node;
}
void diagonalSumUtil(struct Node* root,
				int vd, map<int, int> &diagonalSum)
{
	if(!root)
		return;
		
	diagonalSum[vd] += root->data;


	diagonalSumUtil(root->left, vd + 1, diagonalSum);

	diagonalSumUtil(root->right, vd, diagonalSum);
}

void diagonalSum(struct Node* root)
{

	
	map<int, int> diagonalSum;
	
	diagonalSumUtil(root, 0, diagonalSum);

	map<int, int>::iterator it;
		cout << "Diagonal sum in a binary tree is - ";
	
	for(it = diagonalSum.begin();
				it != diagonalSum.end(); ++it)
	{
		cout << it->second << " ";
	}
}

// Driver code
int main()
{
	struct Node* root = newNode(1);
	root->left = newNode(2);
	root->right = newNode(3);
	root->left->left = newNode(9);
	root->left->right = newNode(6);
	root->right->left = newNode(4);
	root->right->right = newNode(5);
	root->right->left->right = newNode(7);
	root->right->left->left = newNode(12);
	root->left->right->left = newNode(11);
	root->left->left->right = newNode(10);

	diagonalSum(root);

	return 0;
}



