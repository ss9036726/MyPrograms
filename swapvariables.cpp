#include <iostream>
using namespace std;
void swap(int *a,int *b)
{
	int *t;
	t=a;
	a=b;
	b=t;
}
int main()
{
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	if(a>b)
	{
		swap(a,b);
	}
	else if(c>d)
	{
		swap(c,d);
	}
	else if(a>c)
	{
		swap(a,c);
	}
	else if(b>d)
	{
		swap(b,d);
	}
	else if(b>c)
	{
		swap(b,c);
	}
	cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
	return 0;
}