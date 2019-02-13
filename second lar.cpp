#include <iostream>
using namespace std;

int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int a[10000];
    int i,n,max;
    for(i=0;i<n;i++)
    {
      cin>>a[i];
    }
    max=a[0];
    for(i=0;i<n;i++)
    {
      if(a[i]>max)
      {
        max=a[i];
      }
    }
    cout<<max+1<<endl;
  }
  return 0;
}