#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
	int data;
	Node *next;
};

void push(Node **head_ref, int data)
{
	Node *new_node = new Node(); // created new node
	Node *tmp = (*head_ref); // assigned first node mem addr to tmp variable
	new_node->data = data; // set the data of new_node 
	new_node->next = (*head_ref); // 

	if ((*head_ref) != NULL) // if node exists already 
	{
		while (tmp->next != (*head_ref)) // then
		{								//   go to
			tmp = tmp->next;			//	 last node
		}
		tmp->next = new_node; 			// last node will be pointing to head change the pointer to new_node
	
	}
	else // if no node exists make the new_node->next = new_node // self refrencing node
	{
		new_node->next = new_node;
	}
	(*head_ref) = new_node; // at last update the (*head_ref)  with the new_node
}

void deleteNode(Node** head, int key) 
{
	// if linkedlist is empty 
	if (*head == NULL) return;
	// head is the only element / if list contain single node
	if ((*head)->data == key && (*head)->next == *head)
	{
		free(*head);
		*head = NULL;
	}
	// if there are mulitpple nodes present in the list 
	Node *last = *head, *d;
	// deleting the last node
	if ((*head)->data == key)
	{
		while (last->next != *head) 
		{
			last = last->next;
		}
		last->next = (*head)->next;
		free(*head);
		*head = last->next;
	}
	// node/key to be deleted
	while (last->next != (*head) && last->next->data != key)
	{
		last = last->next;
	}
	if (last->next->data == key) 
	{
		d = last->next;
		last->next = d->next;
		free(d);
	}
	// node/key is found
	else 
	{
		cout << "No value found\n" << endl;
	}
}

Node* toCircular(Node *head) 
{
	Node *start = head;
	while (head->next != NULL)
	{
		head = head->next;
	}
	head->next = start;
	return start;
}

int countNodes(Node *head) 
{
	if (head == NULL)
		 return 0;
	int count = 0;
	Node *current = head;
	do
	{
		/* code */
		++count;
		current = current->next;
	} while (current != head);
	
	return count;
}

void printList(Node *head)
{
	Node *tmp = head;
	// if list is not empty
	if (head != NULL)
	{
		// first print the data and then move on
		do
		{
			cout << "Data: " << tmp->data << endl;
			tmp = tmp->next;
		} while (tmp != head);
	}
	else
	{
		cout << "List is empty\n";
	}
}

int main(int argc, char const *argv[])
{
	/* code */
	Node *head = NULL;
	push(&head, 20);
	// printList(head);
	push(&head, 25);
	push(&head, 30);
	printList(head);
	cout << "Nodes: " << countNodes(head) << endl;
	deleteNode(&head,25);
	printList(head);
	return 0;
}
