#include <iostream>
using namespace std;
#define MAX 100
float st[MAX];
int top=-1;
void push(float st[],float val);
float pop(float st[]);
float evalpostfix(char exp[]);

void push(float st[],float val)
{
	if(top==MAX-1)
	{
		cout<<"Stack OverFlow"<<endl;
	}
	else 
	{
		top++;
		st[top]=val;
	}
}

float pop(float st[])
{
	float val=-1;
	if(top==-1)
	{
		cout<<"Stack UnderFlow"<<endl;
	}
	else 
	{
		val=st[top];
		top--;
	}
	return val;
}
float evalpostfix(char exp[])
{
	float op1,op2,value;
	for(int i=0;exp[i]!='\0';i++)
	{
		if(isdigit(exp[i]))
		{
			push(st,(float)(exp[i]-'0'));
		}
		else 
		{
			op2=pop(st);
			op1=pop(st);
			switch(exp[i])
			{
				case '+':
					value=op1+op2;
					break;
				case '-':
					value=op1-op2;
					break;
				case '*':
					value=op1*op2;
					break;
				case '/':
					value=op1/op2;
					break;
			}
			push(st,value);
		}
	}
	return(pop(st));
}
int main()
{
	float val;
	char exp[100];
	cout<<"Enter the Expression: ";
	cin.getline(exp,100);
	val=evalpostfix(exp);
	cout<<"The Value of postfix Expression is : "<<val<<endl;
	return 0;
}