#include<iostream>
using namespace std;

int stack[100];
int top=-1;

void push(int x)
{
    top++;
    stack[top]=x;
}

void pop()
{
    if(top==-1)
        cout<<"Stack Empty\n";
    else
        top--;
}

void peek()
{
    if(top==-1)
        cout<<"Stack Empty\n";
    else
        cout<<"Top = "<<stack[top]<<endl;
}

void display()
{
    for(int i=top;i>=0;i--)
        cout<<stack[i]<<" ";
}

int main()
{
    push(10);
    push(20);
    push(30);

    display();
    cout<<endl;

    pop();

    display();
}
