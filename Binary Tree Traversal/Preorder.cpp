#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;
};

// Preorder Function
void preorder(Node *root)
{
    if(root==NULL)
        return;

    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

int main()
{

    Node *root = new Node();
    root->data = 1;
    root->left = NULL;
    root->right = NULL;

    root->left = new Node();
    root->left->data = 2;
    root->left->left = NULL;
    root->left->right = NULL;

    root->right = new Node();
    root->right->data = 3;
    root->right->left = NULL;
    root->right->right = NULL;

    root->left->left = new Node();
    root->left->left->data = 4;
    root->left->left->left = NULL;
    root->left->left->right = NULL;

    root->left->right = new Node();
    root->left->right->data = 5;
    root->left->right->left = NULL;
    root->left->right->right = NULL;

    cout<<"Preorder Traversal: ";
    preorder(root);

    return 0;
}
