#include <iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int a,b,c,d,t,lcm,gcd;
		cin>>a>>b;
		c=a;
		d=b;
		while(d!=0)
		{
			t=d;
			d=c%d;
			c=t;
		}
		gcd=c;
		lcm=(a*b)/gcd;
		cout<<gcd<<" "<<lcm<<endl;
	}
	return 0;
}