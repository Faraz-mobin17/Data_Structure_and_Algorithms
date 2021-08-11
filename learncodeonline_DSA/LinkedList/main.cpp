#include <bits/stdc++.h>
using namespace std;

class Node 
{
public:
	int data;
	Node* next;
};

void push(Node** head_ref,int new_value) // insert at beg
{
	Node* new_node = new Node();
	new_node->data = new_value;
	new_node->next = (*head_ref);
	*head_ref = new_node;
}

void insertAt(Node* prev_node, int new_value) // insert before node
{
	if (prev_node == NULL)
	{
		cout << "Previous node is null\n" << endl;
		return;
	}

	Node* new_node = new Node();
	new_node->data = new_value;

	new_node->next = prev_node->next;
	prev_node->next = new_node;
}

void append(Node** head_ref,int new_value) // insert at end
{
	Node* new_node = new Node();
	new_node->data = new_value;
	new_node->next = NULL; // if first node or last ->next will be null
	Node* last = (*head_ref); // for traversal

	while (*head_ref == NULL) // if first node
	{
		*head_ref = new_node;
		return;
	}

	while (last->next != NULL) // traverse through nodes 
	{
		last = last->next;
	}
	last->next = new_node; // insert address of last node to last->next
	return;
}




void deleteNode(Node** head_ref, int key) 
{
	Node* temp = *head_ref, *prev;
	// the above line is same as 
	// Node* temp = *head_ref;
	// Node* prev;
	// case 1 if the data is on first node
	if (temp != NULL && temp->data == key)
	{
		*head_ref = temp->next; // temp stores what head stores
		free(temp);
		return;
	}

	// case 2 traverse and then delete the value
	while (temp != NULL && temp->data != key)
	{
		prev = temp;
		temp = temp->next;
	} 
	// case 3 
	if (temp == NULL) return;
	prev->next = temp->next;
	free(temp);
}

void deleteList(Node** head_ref) 
{
	Node* current = *head_ref;
	Node* next;

	while (current != NULL) 
	{
		next = current->next;
		free(current);
		current = next; // this will keep track
	}
	*head_ref = NULL;
}


int getCount(Node* head) 
{
	int count = 0;
	Node* current = head;

	while (current != NULL) 
	{
		++count;
		current = current->next;
	}
	return count;
}

void reverseList(Node* node) // you can call node as head
{
	Node* current = node; // points towards head
	Node* prev = NULL, *next = NULL;

	while (current != NULL)
	{
		next = current->next;
		current->next = prev; // reverse connection

		prev = current;
		current = next;
	}
	node = prev; // update head
}

void printList(Node* node) {
	while (node != NULL) 
	{
		cout << "\n" << node->data;
		node = node->next;
	}
}



 int main(int argc, char const *argv[])
{
	Node* head = NULL;
	append(&head,50); // insert at end
	push(&head,30); // insert at first
	printList(head);
	cout << "\n";
	cout << getCount(head) << endl;
	return 0;
}