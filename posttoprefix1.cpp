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

string postToPre(string exp)
{
  stack<string> st;
  for(int i=0;i<exp.length();i++)
  {
    if(isOperator(exp[i]))
    {
      string op1 = st.top();
      st.pop();

      string op2 = st.top();
      st.pop();

      string temp = exp[i] + op2 + op1;

      st.push(temp);
    }
    else 
    {
      st.push(string(1,exp[i]));
    }
  }
  return (st.top());
}

int main()
{
  string exp;
  cin>>exp;
  cout<<postToPre(exp)<<endl;
  return 0;
}