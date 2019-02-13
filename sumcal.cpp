#include <iostream>
using namespace std;
int main()
{
	int m,n,s=0;
	cout<<"Enter the First Number : ";
	cin>>m;
	cout<<"Enter the Second Number : ";
	cin>>n;
	while(m<=n)
	{
		s=s+m;
		m=m+1;
	}
	cout<<s<<endl;
	return 0;
}