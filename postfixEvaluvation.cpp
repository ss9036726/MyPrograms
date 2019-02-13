#include <iostream>
#include <stack>
using namespace std;

bool isOperator(char x)
{
    return isdigit(x);
}

double postfixEvaluvation(string exp)
{
    stack<double> st;
    for(int i=0;exp[i]!='\0';i++)
    {
        if(isOperator(exp[i]))
        {
            st.push(exp[i] - '0');
        }
        else 
        {
            double op1 = st.top();
            st.pop();
            double op2 = st.top();
            st.pop();
            switch(exp[i])
            {
                case '+':   
                    st.push(op2+op1);
                    break;
                case '-':
                    st.push(op2-op1);
                    break;
                case '*':
                    st.push(op2*op1);
                    break;
                case '/':
                    st.push(op2/op1);
                    break;
            }
        }
    }
    return (st.top());
}

int main()
{
    string exp;
    cin>>exp;
    cout<<postfixEvaluvation(exp)<<endl;
    return 0;
}