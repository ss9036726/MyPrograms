#include <iostream>
#include <stack>

using namespace std;

bool isOperator(char c)
{
    return isdigit(c);
}

double PrefixEval(string exp)
{
    stack<double>st;
    int length = exp.length();
    for(int i=length-1;i>=0;i--)
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
                    st.push(op1 + op2);
                    break;
                case '-':
                    st.push(op1 - op2);
                    break;
                case '*':
                    st.push(op1*op2);
                    break;
                case '/':
                    st.push(op1/op2);
                    break;
            }
        }
    }
    return st.top();
}

int main()
{
    string exp;
    cout<<"Enter the prefix Expression : ";
    cin>>exp;
    cout<<"The  Evaluvation of prefix Expression is : "<<PrefixEval(exp)<<endl;
    return 0;
}