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
    cout<<"How many nodes: ";
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>x;

        newNode=new Node();
        newNode->data=x;
        newNode->next=NULL;

        if(head==NULL)
        {
            head=newNode;
            temp=head;
        }
        else
        {
            temp->next=newNode;
            temp=newNode;
        }
    }

    int count=0;
    temp=head;

    while(temp!=NULL)
    {
        count++;
        temp=temp->next;
    }

    cout<<"Total Nodes = "<<count;

    return 0;
}
