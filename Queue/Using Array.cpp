#include<iostream>
using namespace std;

int q[100];
int front=0,rear=-1;

void enqueue(int x)
{
    rear++;
    q[rear]=x;
}

void dequeue()
{
    if(front>rear)
        cout<<"Queue Empty\n";
    else
        front++;
}

void display()
{
    for(int i=front;i<=rear;i++)
        cout<<q[i]<<" ";
}

int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);

    display();

    cout<<endl;

    dequeue();

    display();
}
