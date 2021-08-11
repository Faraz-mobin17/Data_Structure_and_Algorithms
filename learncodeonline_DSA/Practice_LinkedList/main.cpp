#include <bits/stdc++.h>
using namespace std;

// create  a node
class Node
{
public:
    int data;
    Node *next;
};

// insert at beginnning
void push(Node **head_ref, int new_value)
{
    Node *new_node = new Node();
    new_node->data = new_value;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

//insert at end

void append(Node **head_ref, int new_value)
{
    Node *new_node = new Node();
    new_node->data = new_value;
    new_node->next = NULL;

    if (*head_ref == NULL)
    {
        *head_ref = new_node;
        return;
    }
    Node *last = (*head_ref); // for tarversal

    while (last->next != NULL)
    {
        new_node->next = last->next;
    }
    last->next = new_node;
    return;
}
// insert before
void insertAt(Node *prev_node, int new_value)
{
    Node *new_node = new Node();
    new_node->data = new_value;

    if (prev_node == NULL)
    {
        cout << "Previous node is null\n";
        return;
    }
    new_node->next = prev_node->next;
    prev_node->next = new_node;
}

void deleteNode(Node **head_ref, int key)
{
    Node *temp = *head_ref, *prev;

    // case 1 head node to be deleted

    if (temp == NULL && temp->data == key)
    {
        *head_ref = temp->next;
        free(temp);
        return;
    }

    // case 2 search node to be deleted

    while (temp != NULL && temp->data != key)
    {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL)
        return;

    prev->next = temp->next;
    free(temp);
}

//delete entire list
void deleteList(Node **head_ref)
{
    Node *current = *head_ref;
    Node *next;

    while (current != NULL)
    {
        next = current->next;
        free(current);
        current = next;
    }
    *head_ref = NULL;
}
// return count;
int getCount(Node *head)
{
    int count = 0;
    Node *current = head;

    while (current != NULL)
    {
        ++count;
        current = current->next;
    }
    return count;
}

void reverseList(Node* node) 
{
    Node* prev = NULL;
    Node* next = NULL;
    Node* current = node;  
    
    while (current != NULL)
    {
        /* code */
        next = current->next;
        current->next = prev;

        prev = current;
        current = next;
    }

    node = prev;
    
}

// print list

void printList(Node *head)
{
    while (head != NULL)
    {
        cout << "\n"
             << head->data;
        head = head->next;
    }
}

int main(int argc, char const *argv[])
{
    /* code */
    Node *head = NULL;
    Node *first = new Node();
    Node *second = new Node();
    Node *third = new Node();

    head = first;

    first->data = 1;
    first->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = NULL;

    push(&head, 0); // insert at the beginning
    append(&third, 11);
    insertAt(second, 10); // insert between second and third
    deleteNode(&head, 1);
    deleteNode(&head, 11);
    deleteNode(&head, 23);
    printList(head);

    return 0;
}
