#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node* next;
};

void linkedListTraversal(struct node* last)
{
	struct node* ptr = last;
	if (last == NULL)
	{
		printf("The list is empty\n");
		return;
	}
	ptr = last->next;
	do {
		printf("Elements in the list are: %d\n",ptr->data);
		ptr = ptr->next;
	} while (ptr != last->next);
	printf("\n");
}

struct node* insertAtBeg(struct node* last, int data)
{
	struct node* newNode = (struct node*)malloc(sizeof(struct node));
	newNode->data = data;
	newNode->next = last->next;
	last->next = newNode;
	return last;
}

struct node* insertInEmpty(struct node* last, int data)
{
	struct node* newNode = (struct node*)malloc(sizeof(struct node));
	struct node* ptr = last;
	newNode->data = data;
	if (last == NULL)
	{
		last = newNode;
		last->next = last; // pointing to itself (newNode)
		return last;
	}
}

int main(int argc, char const *argv[])
{
	/* code */
	struct node* last = NULL;
	struct node* head = (struct node*)malloc(sizeof(struct node));
	struct node* first = (struct node*)malloc(sizeof(struct node));
	struct node* second = (struct node*)malloc(sizeof(struct node));
	struct node* third = (struct node*)malloc(sizeof(struct node));
	struct node* fourth = (struct node*)malloc(sizeof(struct node));

	head = first;

	// linking the nodes
	// first->data = 4;
	// first->next = second;

	// second->data = 3;
	// second->next = third;

	// third->data = 6;
	// third->next = fourth;

	// fourth->data = 1;
	// fourth->next = head;
 // 	last = fourth;
 	printf("linked list before insertion\n");
	linkedListTraversal(last);
	printf("linked list after insertion\n");
	last = insertInEmpty(last,30);
	linkedListTraversal(last);
	return 0;
}