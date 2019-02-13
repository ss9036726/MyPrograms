#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int i,j,k,n,temp,total1=0,total2=0;
		long long int a[100];
		cin>>n;
		cin>>k;
		if(k>(n/2))
		{
			k=n-k;
		}
		for(i=0;i<n;i++)
		{
			cin>>a[i];
			total1=total1+a[i];
		}
		for(i=0;i<k;i++)
		{
			for(j=i+1;j<n;j++)
			{
				if(a[i]>a[j])
				{
					temp=a[i];
					a[i]=a[j];
					a[j]=temp;
				}
			}
			total2=total2+a[i];
		}
		total1=total1-total2;
		if(total1>total2)
		{
			cout<<total1-total2<<endl;
		}
		else
		{
			cout<<total2-total1<<endl;
		}
	}
	return 0;
}