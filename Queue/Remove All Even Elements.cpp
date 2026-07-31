#include<iostream>
#include<queue>
using namespace std;

int main()
{
    queue<int> q,temp;

    q.push(10);
    q.push(15);
    q.push(20);
    q.push(25);
    q.push(30);

    while(!q.empty())
    {
        if(q.front()%2!=0)
            temp.push(q.front());

        q.pop();
    }

    while(!temp.empty())
    {
        cout<<temp.front()<<" ";
        temp.pop();
    }
}
