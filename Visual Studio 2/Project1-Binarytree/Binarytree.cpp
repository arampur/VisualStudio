#include<iostream>
using namespace std;

typedef struct TreeNode{
	int data;
	TreeNode *left;
	TreeNode *right;
} TREE;

static int lookup(TREE *node, int target){
	if (node == NULL) return false;
	else {
		if (target < node->data) return(true);
		else {
			if (target < node->data) return lookup(node->left, target);
			else return lookup(node->right, target);
		}
	}
}

//creating new node with given data and null left and right pointers .. this is the first node
TREE * newNode(int data){
	struct TreeNode* node = new (struct TreeNode);
	node->data = data;
	node->left = NULL;
	node->right = NULL;
	return (node);
}

TREE* insert(TREE * node, int data){
	if (node == NULL)
		return newNode(data);
	else {
		if (data <= node->data) node->left = insert(node->left, data);
		else node->right = insert(node->right, data);
	}
}

void printTree(TREE * node){
	if (node == NULL)
		return;
		printTree(node->left);
		cout << node->data << " ";
		printTree(node->right);
}

int main(){
	TREE * root = newNode(10);
	insert(root, 11);
	insert(root, 12);
	insert(root, 13);
	insert(root, 14);
	insert(root, 15);
	cout << "Displaying tree elements : " << endl;
	printTree(root);

	lookup(root, 12);
	return 0;
}