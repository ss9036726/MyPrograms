#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int i,n,temp,j,min;
		int a[10000];
		cin>>n;
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				if(a[j]>a[i])
				{
					temp=a[j];
					a[j]=a[i];
					a[i]=temp;
				}
			}
		}
		min=INT_MAX;
		for(i=0;i<n-1;i++)
		{
			if(a[i+1]-a[i]<min)
			{
				min=a[i+1]-a[i];
			}
		}
		cout<<endl<<min<<endl;
	}
	return 0;
}