#include<iostream>
using namespace std;

//define the tree
struct Node{
	int data;
	struct Node * left;
	struct Node * right;
};

//search for an element in the tree;
static void lookup(struct Node * node, int target){
	if (node == NULL)
		//return false;
		cout << "Root is empty.." << endl;
	//if the value is found in root's data , return true
	else
	{
		if (target = node->data) //return true; 
			cout << "element present in the root.." << endl;
		else
		{
			if (target < node->data) return (lookup(node->left, target));
			else return (lookup(node->right, target));
		}

	}
}

//insert just one new node if root is null
struct Node * newnode(int data){
	struct Node* node = new(struct Node);
	node->data = data;
	node->left = NULL;
	node->right = NULL;
	return(node);
}

//insert into the tree
struct Node* insert(struct Node * node, int data){
	if (node == NULL)
		return(newnode(data));
	else {
		if (data <= node->data) node->left = insert(node->left, data);
		else node->right = insert(node->right, data);
		return (node);
	}
}

//counting number of nodes in the binary tree...
int size(struct Node* node){
	if (node == NULL) return 0;
	else
		return(size(node->left) + 1 + size(node->right));
}

void printTree(struct Node * node){
	if (node == NULL) return;
	printTree(node->left);
	cout << node->data;
	printTree(node->right);
}

int main(){
	Node node;
	insert(&node, 23);
	insert(&node, 20);
	insert(&node, 10);
	insert(&node, 12);
	insert(&node, 25);
	cout << "Tree elements.." << endl;
	printTree(&node);
	cout << "Searching for the element 25 in the tree.." << endl;
	lookup(&node, 25);
	cout << "The tree contains " << size(&node) << " elements.." << endl;
	cout << "Printing the contents of the tree.." << endl;
	printTree(&node);
	return 0;
}