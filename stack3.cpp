#include <iostream>
#include <string>
using namespace std;
#define MAX=10;
int top=-1;
char st[MAX];
void push(char str[],char val);
void pop(char str[]);
void infixtopostfix(char st[],char st1[]);
int getPriority(char);

void push(char str[],char val)
{
	if(top==MAX-1)
	{
		cout<<"Stack OverFlow"<<endl;
	}
	else 
	{
		top++;
		str[top]=val;
	}
}

void pop(char str[])
{
	char val=' ';
	if(top==-1)
	{
		cout<<"Stack UnderFlow"<<endl;
	}
	else
	{
		val=str[top];
		top--;
	}
	return val;
}

int getPriority(char op)
{
	if(op=='*' || op=='/')
		return 1;
	else if(op=='+' || op=='-')
		return 0;
}

void infixtopostfix(char st[],char st1[])
{
	int i=0,j=0;
	char temp;
	strcpy(st1,"");
	while(st[]!='\0')
	{
		if(st[i]=='(')
		{
			push(str,st);
			i++;
		}
		else if(st[i]==')')
		{
			while((top!=-1)&&(str[top]!='('))
			{
				st1[]=pop(str);
				j++;
			}
			if(top==-1)
			{
				cout<<"Incorrect Expression";
				exit(1);
			}
			temp=pop(str);
			i++;
		}
		
	}
}
int main()
{
	char i1[100],p1[100];
	cout<<"Enter Any String : ";
	cin.getline(i1,100);
	strcpy(p1,"");
	infixtopostfix(i1,p1);
	cout<<"The Postfix Expression is : ";
	cout<<p1;
	return 0;
}