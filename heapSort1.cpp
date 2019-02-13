#include <iostream>
using namespace std;

void heapify(int arr[],int n,int i)
{
    int smallest = i;
    int left = 2*i+1;
    int right = 2*i+2;

    if(left < n && arr[left]<arr[i])
    {
        smallest = left;
    }
    if(right < n && arr[right]<arr[smallest])
    {
        smallest = right;
    }
    if(smallest!=i)
    {
        swap(arr[i],arr[smallest]);
        heapify(arr,n,smallest);
    }
}

void heapSort(int arr[],int n)
{
    for(int i=n/2-1;i>=0;i--)
    {
        heapify(arr,n,i);
    }

    for(int i=n-1;i>=0;i--)
    {
        swap(arr[0],arr[i]);

        heapify(arr,i,0);
    }
}

void printArray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int arr[100];
    int i,n;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    printArray(arr,n);
    heapSort(arr,n);
    printArray(arr,n);
    return 0;
}