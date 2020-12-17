#include <stdio.h>
#include <stdlib.h>

struct node {
	struct node* prev;
	int data;
	struct node* next;
};

void traversal(struct node* head) {
	struct node* ptr = head;
	if (head == NULL) {
		printf("The list is empty\n");
		return;
	}
	while (ptr != NULL)
	{
		printf("Elements are: %d\n", ptr->data);
		ptr = ptr->next;
	}
	printf("\n");
}

struct node* insertAtFirst(struct node* head, int data) {
	struct node* newNode = (struct node*)malloc(sizeof(struct node));
	// struct node* ptr = head;
	newNode->data = data;
	if (head == NULL)
	{
		newNode->next = head;
		newNode->prev = head;
		head = newNode;
		return head;
	} else {
		newNode->next = head;
		head = newNode;
		newNode->prev = NULL;
		return head;
	}
}

struct node* insertAtIndex(struct node* head,int data, int index) {
	struct node* newNode = (struct node*)malloc(sizeof(struct node));
	struct node* ptr = head;
	newNode->data = data;
	int i = 0;
	while (i != index - 1)
	{
		ptr = ptr->next;
		i += 1;
	}
	newNode->next = ptr->next;
	newNode->prev = ptr;
	ptr->next = newNode;
	return head;
}

struct node* insertAtEnd(struct node* head, int data) {
	struct node* newNode = (struct node*)malloc(sizeof(struct node));
	struct node* ptr = head;
	newNode->data = data;
	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}
	newNode->next = ptr->next;
	ptr->next = newNode;
	newNode->prev = ptr;
	return head;
}

struct node* create_list(struct node* head)
{
	int i,n,data;
	printf("Enter the number of nodes to be inserted in the list\n");
	scanf("%d",&n);
	head = NULL;
	if (n == 0)
		return head;
	printf("Enter the element to be inserted\n");
	scanf("%d",&data);
	head = insertAtFirst(head,data);
	for (i = 2; i <= n; i += 1)
	{
		printf("Enter the element to be inserted\n");
		scanf("%d",&data);
		head = insertAtEnd(head,data);
	}
	return head;
}


struct node* del(struct node* head, int data)
{
	struct node* tmp;
	if (head == NULL)
	{
		printf("The list is empty\n");
		return head;
	}
	if (head->next == NULL) // deletion of only a node
	{	
		if (head->data == data)
		{
			tmp = head;
			head = NULL;
			free(tmp);
			return head;
		}
		else 
		{
			printf("Element was not found at the position\n");
			return head;
		}
	}

	if (head->data == data) // deletion of first node
	{
		tmp = head;
		head = head->next;
		head->prev = NULL;
		free(tmp);
		return head;
	}
	tmp = head->next;
	while (tmp->next != NULL)
	{
		if (tmp->data == data)
		{
			tmp->prev->next = tmp->next;
			tmp->next->prev = tmp->prev;
			free(tmp);
			return head;
		}
		tmp = tmp->next;
	}
	if (tmp->data == data)
	{
		tmp->prev->next = NULL;
		free(tmp);
		return head;
	}
	printf("Element %d not found\n",data);
	return head;
}


int main(int argc, char const *argv[])
{
	/* code */
	struct node* head = (struct node*)malloc(sizeof(struct node));
	struct node* first = (struct node*)malloc(sizeof(struct node));
	struct node* second = (struct node*)malloc(sizeof(struct node));
	struct node* third = (struct node*)malloc(sizeof(struct node));
	struct node* fourth = (struct node*)malloc(sizeof(struct node));

	// head points to first node
	head = first;

	// first node
	first->prev = NULL;
	first->data = 1;
	first->next = second;

	// second node
	second->prev = first;
	second->data = 2;
	second->next = third;

	// third node
	third->prev = second;
	third->data = 3;
	third->next = fourth;

	// fourth node 
	fourth->prev = third;
	fourth->data = 4;
	fourth->next = NULL;
	printf("Linked list before deleteion\n");
	traversal(head);
	head = del(head,4  );
	printf("Linked list after deleteion\n");
	traversal(head);
	// printf("Linked list after insertion\n");
	// head = insertAtEnd(head,88);
	// head = insertAtFirst(head,72);
	// head = insertAtIndex(head,56,1);
	// traversal(head);
	// head = create_list(head);
	// traversal(head);
	return 0;
}