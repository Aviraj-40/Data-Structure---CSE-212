#include<iostream>
#include<queue>
using namespace std;

int main()
{
    queue<int> q;

    q.push(30);
    q.push(10);
    q.push(80);
    q.push(20);

    int mx=-99999;
    int mn=99999;

    while(!q.empty())
    {
        if(q.front()>mx)
            mx=q.front();

        if(q.front()<mn)
            mn=q.front();

        q.pop();
    }

    cout<<"Maximum = "<<mx<<endl;
    cout<<"Minimum = "<<mn;
}
