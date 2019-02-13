#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s,d;
	cin>>s;
	int i,j,t,count;
	cin>>t;
	while(t)
	{
		count=0;
		cin>>d;
		for(i=0;i<s.length();i++)
		{
			for(j=0;j<d.length();j++)
			{
				if(s[i]==d[j])
				{
					count++;
				}
			}
		}
		if(count==s.length())
		{
			cout<<"YES"<<endl;
		}
		else 
		{
			cout<<"NO"<<endl;
		}
		t--;
	}
	return 0;
}