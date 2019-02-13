#include <iostream>
#include <stack>
using namespace std;

bool isOperator(char x)
{
    return ((x>='a' && x<='z')||(x>='A' && x<='Z'));
}

string postfixToInfix(string exp)
{
    stack<string> st;
    for(int i=0;exp[i]!='\0';i++)
    {
        if(isOperator(exp[i]))
        {
            st.push(string(1,exp[i]));
        }
        else 
        {
            string op1 = st.top();
            st.pop();
            string op2 = st.top();
            st.pop();
            string temp = "(" + op2 + exp[i] + op1 + ")";
            st.push(temp);
        }
    }
    return st.top();
}

int main()
{
    string exp;
    cout<<"Enter the postfix Expression : ";
    cin>>exp;
    cout<<"The infix expression is : "<<postfixToInfix(exp)<<endl;
    return 0;
}