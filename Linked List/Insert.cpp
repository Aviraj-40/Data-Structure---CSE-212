#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

void print(Node *head)
{
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
}

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

    int choice,value,pos;

    cout<<"1.Start 2.Middle 3.End : ";
    cin>>choice;

    newNode=new Node();

    cout<<"Value: ";
    cin>>value;

    newNode->data=value;

    if(choice==1)
    {
        newNode->next=head;
        head=newNode;
    }

    else if(choice==2)
    {
        cout<<"Position: ";
        cin>>pos;

        temp=head;

        for(int i=1;i<pos-1;i++)
            temp=temp->next;

        newNode->next=temp->next;
        temp->next=newNode;
    }

    else
    {
        temp=head;

        while(temp->next!=NULL)
            temp=temp->next;

        temp->next=newNode;
        newNode->next=NULL;
    }

    print(head);
}
