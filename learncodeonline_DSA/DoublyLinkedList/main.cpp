#include <iostream>
using namespace std;

class Node 
{
   public:
    Node *next;
    int data;
    Node *prev;
};

// insert at the beginning
void push(Node** head_ref,int data) 
{
    Node *new_node = new Node();
    new_node->data = data;

    new_node->next = (*head_ref);
    new_node->prev = NULL;

    
    if (*head_ref != NULL)
    {
        (*head_ref)->prev = new_node;
    }

    (*head_ref) = new_node;
}

// insert after node 
void insertAfter(Node* prev_node,int data) 
{
  if (prev_node == NULL) 
  {
    cout << "prev node cannot be null " << endl;
    return;
  }
  Node* new_node = new Node();
  new_node->data = data;
  new_node->next = prev_node->next;
  prev_node->next = new_node;
  new_node->prev = prev_node;

  if (new_node->next != NULL) 
  {
      new_node->next->prev = new_node;
  }
}

// add to last in doubly linedlist 

void addToLast(Node** head_ref, int data)
{
    Node *new_node = new Node();
    new_node->data = data;
    new_node->next = NULL;

    if ((*head_ref) == NULL) 
    {
        new_node->prev = NULL; // only element in the linkedlist
        *head_ref = new_node;
        return;
    }

    Node* last_node = *head_ref;
    //  going to last node 
    while (last_node->next != NULL) 
    {
        last_node = last_node->next;
    }
    last_node->next = new_node;
    new_node->prev = last_node;
    return;
}

void deleteNode(Node** head_ref,Node* key)
{
    if (*head_ref == NULL || key == NULL)
        return;

    // case 1 : when we want to delete head node
    if (*head_ref == key)
        *head_ref = key->next;
    // case 2: 
    if (key->next != NULL) 
        key->next->prev = key->prev;
    // case 3 : 
    if (key->prev != NULL) 
        key->prev->next = key->next;

    free(key);
    return;

}

void printList(Node* node) 
{
    if (node == NULL)
    {
        cout << "There is no node in the list" << endl;
        return;
    }
    while (node != NULL) 
    {
        cout << " " << node->data <<  endl;
        node = node->next;
    }
}

int main(int argc, char const *argv[])
{
    /* code */
    Node *head = NULL;

    push(&head, 1);
    push(&head,2);
    push(&head,3);
    printList(head);

    return 0;
}
