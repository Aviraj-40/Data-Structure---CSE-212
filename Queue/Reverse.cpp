#include<iostream>
#include<queue>
#include<stack>
using namespace std;

int main()
{
    queue<int> q;

    q.push(10);
    q.push(20);
    q.push(30);

    stack<int> s;

    while(!q.empty())
    {
        s.push(q.front());
        q.pop();
    }

    while(!s.empty())
    {
        q.push(s.top());
        s.pop();
    }

    while(!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }
}
