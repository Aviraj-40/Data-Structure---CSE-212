#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node *left,*right;
};

int main()
{
    Node *root = new Node{50,NULL,NULL};

    root->left = new Node{30,NULL,NULL};
    root->right = new Node{70,NULL,NULL};

    root->left->left = new Node{20,NULL,NULL};
    root->left->right = new Node{40,NULL,NULL};

    root->right->left = new Node{60,NULL,NULL};
    root->right->right = new Node{80,NULL,NULL};

    Node *temp=root;

    while(temp->left!=NULL)
        temp=temp->left;

    cout<<"Minimum = "<<temp->data;
}
