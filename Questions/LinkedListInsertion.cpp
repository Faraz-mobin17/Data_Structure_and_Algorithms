#include <bits/stdc++.h> 
using namespace std; 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
void printList(Node* node) 
{ 
    while (node != NULL) { 
        cout << node->data <<" "; 
        node = node->next; 
  }  
  cout<<"\n";
} 


class Solution {
public:
	Node* insertAtBegining(Node* head, int x) {
		// code here
		// case  1 if the node inserted is the first node
		Node* new_node = new Node(x);
		if (head == NULL) 
		{
			head = new_node;
			return head;
		}

		// case 2 if the inserted node is not the first node in the list
	
			new_node->next = head;
			head = new_node;
			return head;
	
	

	}
	Node* insertAtEnd(Node* head,int x) {
		// code here
		Node* new_node = new Node(x);
		Node* current = head;
		if (head == NULL) {
			head = new_node;
			return head;
		}
		while (current->next != NULL) {
			current = current->next;
		}
		current->next = new_node;
		return head;
	}
};

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        struct Node *head = NULL;
        for (int i = 0; i < n; ++i)
        {
            int data, indicator;
            cin>>data;
            cin>>indicator;
            Solution obj;
            if(indicator)
                head = obj.insertAtEnd(head, data); 
            else
                head = obj.insertAtBegining(head, data);
        }
        printList(head); 
    }
    return 0; 
} 
