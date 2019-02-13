#include <iostream>
#include <string.h>
using namespace std;
void check(char ch[])
{
	if(ch[0]=='}' && ch[0]==']' && ch[0]==')')
	{
		cout<<"Unbalanced"<<endl;
	}
	else
	{
		int i,c=0;
		char n;
		n=strlen(ch);
		for(i=0;i<n;i++)
		{
			if(ch[i]=='{' && ch[i]=='[' && ch[i]=='(')
			{
				c++;
			}
			else if(ch[i]=='}' && ch[i]==']' && ch[i]==')')
			{
				c--;
			}
		}
		if(c==0)
		{
			cout<<"Balanced"<<endl;
		}
		else 
		{
			cout<<"Unbalanced";
		}
	}
}
int main()
{
	char ch[100];
	cin>>ch;
	check(ch);
	return 0;
}