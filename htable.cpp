#include <iostream>
using namespace std;

class htable{
	public:
		void create(int arr[] ,int hash[] ,int ,int);
		int hasht(int,int);
		int rehash(int,int);
};

void htable::create(int arr[],int hash[],int n,int tsize)
{
	int key,i;
	for(int k=0;k<n;k++)
	{
		key = arr[k];
		i = hasht(key,tsize);
		while(hash[i]!=-1)
		{
			i=rehash(i,tsize);
		}
		hash[i]=key;
	}
}

int htable::hasht(int key,int tsize)
{
	return key%tsize;
}

int htable::rehash(int key,int tsize)
{
	return (key+1)%tsize;
}

int main()
{
	htable ob1;
	int arr[100],hash[100],n,tsize,i;
	cin>>n;
	cin>>tsize;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(i=0;i<tsize;i++)
	{
		hash[i]=-1;
	}
	
	ob1.create(arr,hash,n,tsize);
	
	cout<<endl<<endl<<endl;
	for(i=0;i<tsize;i++)
	{
		cout<<"\t"<<hash[i]<<" "<<endl;
	}
	return 0;
}
