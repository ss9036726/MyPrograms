#include <bits/stdc++.h>
using namespace std;

bool isOperator(char c)
{
	return isdigit(c);
}

double prefixEval(string exp)
{
	stack<double> st;
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
					st.push(op1+op2);
					break;
				case '-':
					st.push(op1-op2);
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
	cin>>exp;
	cout<<prefixEval(exp)<<endl;
	return 0;
}
