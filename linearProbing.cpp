#include <iostream>
using namespace std;

class htable{
    public:
    void createTable(int arr[],int hash[],int,int);
    int hasht(int,int);
    int rehash(int,int);
};

void htable::createTable(int arr[],int hash[],int n,int tsize)
{
    int key,i;
    for(int k=0;k<n;k++)
    {
        key = arr[k];
        i=hasht(key,tsize);

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
    htable h;
    int arr[20],hash[20];
    int i,n,tsize;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cin>>tsize;
    for(i=0;i<tsize;i++)
    {
        hash[i]=-1;
    }
    h.createTable(arr,hash,n,tsize);

    for(i=0;i<tsize;i++)
    {
        cout<<i<<" "<<hash[i]<<endl;
    }
    return 0;
}