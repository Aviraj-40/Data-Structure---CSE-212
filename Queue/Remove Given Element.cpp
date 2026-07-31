#include<iostream>
#include<queue>
using namespace std;

int main()
{
    queue<int> q,temp;

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);

    int item;
    cin>>item;

    while(!q.empty())
    {
        if(q.front()!=item)
            temp.push(q.front());

        q.pop();
    }

    while(!temp.empty())
    {
        cout<<temp.front()<<" ";
        temp.pop();
    }
}
