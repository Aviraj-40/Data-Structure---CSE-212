#include<iostream>
#include<stack>
using namespace std;

int main()
{
    string str;
    cin>>str;

    stack<char> s;

    for(char c:str)
    {
        if(c=='(')
            s.push(c);

        else if(c==')')
        {
            if(s.empty())
            {
                cout<<"Not Balanced";
                return 0;
            }
            s.pop();
        }
    }

    if(s.empty())
        cout<<"Balanced";
    else
        cout<<"Not Balanced";
}
