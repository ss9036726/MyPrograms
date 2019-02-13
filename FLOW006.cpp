#include <iostream>
using namespace std;
int main()
{
	long int n;
	cin>>n;
	while(n--)
	{
		long long int n,sum=0,r;
		cin>>n;
		while(n!=0)
		{
			r=n%10;
			sum=sum+r;
			n=n/10;
		}
		cout<<sum;
	}
	return 0;
}