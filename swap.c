#include<stdio.h>

int main()
{
	int a,b,t;
	scanf("%d %d",&a,&b);
	t=a;
	a=b;
	b=t;
	printf("%d\n%d\n",a,b);
	return 0;
}