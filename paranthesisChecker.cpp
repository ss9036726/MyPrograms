#include <bits/stdc++.h>
using namespace std;

bool isParanthesisBalanced(string exp)
{
    stack <char> s;
    char x;
    for(int i=0;i<exp.length();i++)
    {
        if(exp[i]=='(' || exp[i]=='[' || exp[i]=='{')
        {
            s.push(exp[i]);
            continue;
        }
        if(s.empty())
            return false;

        switch(exp[i])
        {
            case ')':
                x = s.top();
                s.pop();
                if(x=='{' || x=='[')
                    return false;
                break;
            case ']':
                x=s.top();
                s.pop();
                if(x=='(' || x=='{')
                    return false;
                break;
            case '}':
                x=s.top();
                s.pop();
                if(x=='(' || x=='[')
                    return false;
                break;
        }
    }
    return (s.empty());
}

int main()
{
    string exp;
    cout<<"Enter the Expression : ";
    cin>>exp;
    if(isParanthesisBalanced(exp))
    {
        cout<<"Balanced"<<endl;
    }
    else 
    {
        cout<<"NotBalanced"<<endl;
    }
    return 0;
}