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
    Node *head=NULL,*temp,*prev,*newNode;

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

    int choice,pos;

    cout<<"1.Start 2.Middle 3.End : ";
    cin>>choice;

    if(choice==1)
    {
        temp=head;
        head=head->next;
        delete temp;
    }

    else if(choice==2)
    {
        cout<<"Position: ";
        cin>>pos;

        temp=head;

        for(int i=1;i<pos;i++)
        {
            prev=temp;
            temp=temp->next;
        }

        prev->next=temp->next;
        delete temp;
    }

    else
    {
        temp=head;

        while(temp->next!=NULL)
        {
            prev=temp;
            temp=temp->next;
        }

        prev->next=NULL;
        delete temp;
    }

    print(head);
}
