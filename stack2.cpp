#include <iostream>
#include <algorithm>
#include <string>
#include <stack>
using namespace std;
int prec(char c)
{
	if(c=='^')
	return 3;
	else if(c=='*' || c=='/')
		return 2;
	else if(c=='+' || c=='-')
		return 1;
	else
		return -1;
}
void infixtop(string s)
{
	std::stack<char> st;
	st.push('N');
	int l=s.length();
	string s1;
	for(int i=0;i<l;i++)
	{
		if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z'))
			s1=s1+s[i];
		else if(s[i]==')')
		{
			st.push(')');
		}
		else if(s[i]=='(')
		{
			while(st.top()!='N' && st.top()!=')')
			{
				char c=st.top();
				st.pop();
				s1=s1+c;
			}
			if(st.top()==')')
			{
				char c=st.top();
				st.pop();
			}
		}
		else 
		{
			while(st.top()!='N' && prec(s[i])==prec(st.top()))
			{
				char c=st.top();
				st.pop();
				s1=s1+c;
			}
			st.push(s[i]);
		}
	}
	while(st.top()!='N')
	{
		char c=st.top();
		st.pop();
		s1=s1+c;
	}
	cout<<s1<<" ";
}

int main()
{
	string s="(((a+b)-c)+d*e/(f-g))";
	reverse(s.begin(),s.end());
	infixtop(s);
	return 0;
}