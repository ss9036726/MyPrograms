#include <iostream>
#include <stack>

using namespace std;

bool isOperator(char x)
{
    switch (x)
    {
        case '+':
        case '-':
        case '*':
        case '/':
        return true;
    }
    return false;
}

string postfixToInfix(string exp)
{
    stack<string> st;
    int length = exp.size();

    for(int i=length-1;i>=0;i--)
    {
        if(isOperator(exp[i]))
        {
            string op1 = st.top();
            st.pop();
            string op2 = st.top();
            st.pop();
            string temp = '('+op1+exp[i]+op2+')';
            st.push(temp);
        }
        else 
        {
            st.push(string(1,exp[i]));
        }
    }
    return st.top();
}

int main()
{
    string exp;
    cout<<"Enter the postfix expression : ";
    cin>>exp;
    cout<<"The Infix expression is : "<<postfixToInfix(exp)<<endl;
    return 0;
}