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

    int n,x,item;

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

    cout<<"Search item: ";
    cin>>item;

    temp=head;
    bool found=false;

    while(temp!=NULL)
    {
        if(temp->data==item)
        {
            found=true;
            break;
        }

        temp=temp->next;
    }

    if(found)
        cout<<"Found";
    else
        cout<<"Not Found";
}
