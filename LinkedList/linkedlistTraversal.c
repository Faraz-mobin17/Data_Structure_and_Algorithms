#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node* next;
};

void linkedListTraversal(struct node* ptr)
{
	while (ptr != NULL)
	{
		printf("Element: %d\n",ptr->data);
		ptr = ptr->next;	
	}
	printf("\n");
} 
// case 1
struct node* insertAtFirst(struct node* head, int data)
{
	struct node* tmp = (struct node*)malloc(sizeof(struct node));
	tmp->data = data;
	tmp->next = head;
	head = tmp;
	return head;
}

// case 2
struct node* insertAtIndex(struct node* head, int data, int index)
{
	struct node* tmp = (struct node*)malloc(sizeof(struct node));
	struct node* p = head;
	int i = 0;
	while (i != index - 1)
	{
		p = p->next;
		i += 1;
	}
	tmp->data = data;
	tmp->next = p->next;
	p->next = tmp;
	return head;
}

// case 3
struct node* insertAtEnd(struct node* head, int data)
{
	struct node* tmp = (struct node*)malloc(sizeof(struct node));
	struct node* p = head;
	tmp->data = data;
	while (p->next != NULL)
	{
		p = p->next;
	}
	tmp->next = p->next;
	p->next = tmp;
	return head;
}
// case 4
struct node* insertAfter(struct node* head, struct node* prevnode, int data)
{
	struct node* tmp = (struct node*)malloc(sizeof(struct node));
	tmp->data = data;

	tmp->next = prevnode->next;
	prevnode->next = tmp;

	return head;

}

// case 1 deleting the first element form the linked list

struct node* deleteFirst(struct node* head)
{
	struct node* ptr = head;
	head = head->next;
	free(ptr);
	return head;

}
// case 2: deleting the elemtn at a given index form the linked list
struct node* deleteAtIndex(struct node* head, int index)
{
	struct node* ptr = head;
	struct node* qptr = head->next;
	int i = 0;
	for (i = 0; i < index - 1; i += 1)
	{
		ptr = ptr->next;
		qptr = qptr->next;
	}
	ptr->next = qptr->next;
	free(qptr);
	return head;
}

// case 3: deleting the last element
struct node* deleteAtLast(struct node* head)
{
	struct node* ptr = head;
	struct node* qptr = head->next;
	while (qptr->next != NULL)
	{
		ptr = ptr->next;
		qptr = qptr->next;
	}
	ptr->next = NULL;
	free(qptr);
	return head;
}

// case 4: deleting the element with a given value
struct node* deleteValue(struct node* head, int value)
{
	struct node* ptr = head;
	struct node* qptr = head;
	while (qptr->data != value && qptr->next != NULL)
	{
		ptr = ptr->next;
		qptr = qptr->next;
	}
	if (qtpr->data == value)
	{		
		ptr->next = qptr->next
		free(qptr);	
		return head;
	} else {
		printf("You have reached to last node and data is not found\n");
	}
	
}
int main(int argc, char const *argv[])
{
	/* code */
	struct node* head = NULL;
	struct node* second;
	struct node* third;
	struct node* fourth;
	//allocate memory for nodes in the linked list
	head = (struct node*)malloc(sizeof(struct node));
	second = (struct node*)malloc(sizeof(struct node));
	third = (struct node*)malloc(sizeof(struct node));
	fourth = (struct node*)malloc(sizeof(struct node));
	// link first and second node
	head->data = 7;
	head->next = second;

	// link second and third node
	second->data = 11;
	second->next = third;

	// link thrid node to the fourth
	third->data = 66;
	third->next = fourth;

	// fourth linked list and terminate it 
	fourth->data = 41;
	fourth->next = NULL;

	// printing the linked list
	// linkedListTraversal(head);

	// head = insertAtFirst(head,56);

	// insert at index
	// head = insertAtIndex(head,88,1);

	// printing the linked list
	linkedListTraversal(head);

	// insert at end of the list
	// head = insertAtEnd(head,72);

	// head = insertAfter(head,second,71);
	// linked list after before deletion
	// printf("Linked list before deletion\n");
	// linkedListTraversal(head);

	// deleting the first element of the linked list
	// head = deleteFirst(head);
	// head = deleteAtIndex(head,2);
	// head = deleteAtLast(head);
	// printf("Linked list after deletion\n");
	head = reverse(head);
	linkedListTraversal(head);
	return 0;
}