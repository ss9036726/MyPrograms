#include <stdio.h>

int formNumber(int n)
{
	int i,m,d=0;
	for(i=0;i<n;i++)
	{
		scanf("&d",&m);
		d=d*10+m;
	}
	return d;
}
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d\n",formNumber(n));
	return 0;
}