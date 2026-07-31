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

    int n,x,sum=0;

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

    temp=head;

    while(temp!=NULL)
    {
        sum+=temp->data;
        temp=temp->next;
    }

    cout<<"Sum = "<<sum;
}
