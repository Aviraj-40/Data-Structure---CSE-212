#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

int main()
{
    Node *head=NULL,*temp,*newNode;

    int n,x;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>x;

        newNode=new Node();
        newNode->data=x;
        newNode->next=NULL;

        if(head==NULL)
            head=temp=newNode;
        else
        {
            temp->next=newNode;
            temp=newNode;
        }
    }

    int mn=head->data;

    temp=head;

    while(temp!=NULL)
    {
        if(temp->data<mn)
            mn=temp->data;

        temp=temp->next;
    }

    cout<<"Minimum = "<<mn;
}
