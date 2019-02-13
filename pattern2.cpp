#include <iostream>
using namespace std;
int main()
{
	int i,j,n,m;
	cout<<"Enter the value : ";
	cin>>n;
	cout<<"Enter the Value : ";
	cin>>m;
	for(i=1;i<=n;i++)
	{
		//cout<<i<<" ";
		for(j=1;j<=m;j++)
		{
			cout<<j<<" ";
		}
		cout<<endl;
	}
	return 0;
}