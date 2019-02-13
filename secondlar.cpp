#include <iostream>
using namespace std;

int main()
{
  int a[10000];
  int i,n,m1,m2;
  cin>>n;
  for(i=0;i<n;i++)
  {
    cin>>a[i];
  }
  m1=m2=a[0];
  for(i=0;i<n;i++)
  {
    if(a[i]>m1)
    {
      m2=m1;
      m1=a[i];
    }
    else if(a[i]>m2 && a[i]!=m1)
    {
      m2=a[i];
    }
  }
  cout<<m2<<endl;
  return 0;
}