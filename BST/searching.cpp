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

    int item;
    cout<<"Enter Search Value: ";
    cin>>item;

    Node *temp = root;

    while(temp!=NULL)
    {
        if(item==temp->data)
        {
            cout<<"Found";
            return 0;
        }

        else if(item<temp->data)
            temp=temp->left;

        else
            temp=temp->right;
    }

    cout<<"Not Found";
}
