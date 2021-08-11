#include <iostream>
using namespace std;

class Node 
{
    public:

    int root;
    Node* left, *right;

};

Node* newNode(int data)
{
    Node* new_node = new Node();
    new_node->root = data;
    new_node->left = new_node->right = NULL;
    return new_node;
}

Node* insert(Node* node, int data)
{
    if (node == NULL)
        return newNode(data);
    if (data < node->root)
    {
        node->left = insert(node->left,data);
    }
    else 
    {
        node->right = insert(node->right, data);
    }
}

Node* inOrderSuccessor(Node* node)
{
    Node* new_value = node; 

    while (new_value->left != NULL)
    {
        new_value = new_value->left;
    }
    return new_value;
}

Node* deleteNode(Node* root,int data)
{
    if (root == NULL) return root;

    if (data < root->root)
    {
        root->left = deleteNode(root->left, data);
    }
    else if (data > root->root) 
    {
        root->right = deleteNode(root->right,data); 
    }
    else 
    {
        if (root->left == NULL)
        {
            Node* temp = root->right;
            delete(root);
            return temp;
        }
        else if (root->right == NULL)
        {
            Node* temp = root->left;
            delete(root);
            return temp;
        }
        Node* temp = inOrderSuccessor(root->right);
        root->root = temp->root;
        root->right = deleteNode(root->right, temp->root);
    }
    return root;
}

int main(int argc, char const *argv[])
{
    /* code */
    return 0;
}
