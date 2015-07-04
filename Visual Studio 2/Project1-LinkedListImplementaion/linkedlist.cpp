#include<iostream>
using namespace std;


struct node{
	node *next;
	int number;
};

bool isEmpty(node *&head){
	if (head == NULL) return true;
	else
		return false;
}

void insertasfirst(node *&head, node*& last, int number){
	node *temp = new node;
	temp->number = number;
	temp->next = NULL;
	head = temp;//both pointers pointing to current node
	last = temp;
}

void insert(node *&head, node*& last, int number){
	if (isEmpty(head))
		insertasfirst(head, last, number);
	else 
	{
		node *temp = new node;
		temp->number = number;
		temp->next = NULL;
		last->next = temp; //last node's next is current node;
		last = temp;
	}
}


void remove(node *&head, node *&last){
	if (isEmpty(head))
		cout << "list is already empty.." << endl;
	else if (head == last) //there is one element
	{
		delete head;
		head = NULL;
		last = NULL;//both pointers to null so nothing in list
	}

	else //there are more than one element in the list
	{
		node *temp = head; 
		head = head->next;
		delete temp;
	}
}

void showList(node *current){
	if (isEmpty(current))
		cout << "List is already empty nothing to display.." << endl;
	else
	{
		cout << "List elements : " << endl;
		while (current != NULL){
			cout << current->number << endl;
			current = current->next;
		}
	}
}

node * reverselist(node *head){
	struct node * prev = NULL;
	while (head!=NULL)
	{
		node * next = head->next;
		head->next = prev;
		prev = head;
		head = next;
	}
	return prev;
}


int main(){
	node * head = NULL;
	node *last = NULL;
	int choice;
	int number;
	do{
		cout << "Menu...\n";
		cout << "1. Add an element into list..\n";
		cout << "2. Remove an element from the list..\n";
		cout << "3. Reverse list..\n";
		cout << "4. Display list elements..\n";
		cout << "5. Exit..\n";
		cout << "Please enter your choice : ";
		cin >> choice;
		switch (choice){
		case 1: cout << "Please enter element: " << endl;
			cin >> number;
			insert(head, last, number);
			break;

		case 2: cout << "Removing element from list : " << endl;
			remove(head, last);
			break;

		case 3: head = reverselist(head);
			cout << "reversing list contents : " << endl;
			showList(head);
			break;

		case 4: cout << "Displaying list elements.. : " << endl;
			showList(head);
			break;
		case 5: exit(0);
			break;
		default: cout << "Not valid choice, Exiting application...\n ";
		}
	} while (choice < 6);
	return 0;
}