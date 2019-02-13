#include <iostream>
using namespace std;

void heapify(int arr[],int i,int n)
{
    int largest = i;
    int left = 2*i+1;
    int right = 2*i+2;

    if(left <= n && arr[left] >= arr[i])
    {
        largest = left;
    }
    if(right <= n && arr[right] >= arr[largest])
    {
        largest = right;
    }
    if(largest!=i)
    {
        swap(arr[i],arr[largest]);
        heapify(arr,largest,n);
    }
}

void maxHeap(int arr[] , int n)
{
    for(int i=n/2-1;i>=0;i--)
    {
        heapify(arr,i,n);
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
    maxHeap(arr,n);
    printArray(arr,n);
    return 0;
}