#include<iostream>
#include<stack>
using namespace std;

int main()
{
    stack<int> s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    int mid=s.size()/2;

    stack<int> temp;

    for(int i=0;i<mid;i++)
    {
        temp.push(s.top());
        s.pop();
    }

    s.pop();

    while(!temp.empty())
    {
        s.push(temp.top());
        temp.pop();
    }

    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
}
