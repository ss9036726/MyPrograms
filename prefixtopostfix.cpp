#include <iostream>
#include <stack>

using namespace std;

bool isOperator(char x)
{
    switch(x)
    {
        case '+':
        case '-':
        case '*':
        case '/':
        return true;
    }
    return false;
}

string prefixtoPostfix(string exp)
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
            string temp = op1 + op2 + exp[i];
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
    cout<<"Enter the Prefix Expression : ";
    cin>>exp;
    cout<<"The Postfix Expression is : "<<prefixtoPostfix(exp)<<endl;
    return 0;
}