#include <iostream>
using namespace std;

void bubbleSort(int arr[],int n)
{
    int temp;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            if(arr[j] > arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
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
    cout<<"Enter the size of Array : ";
    cin>>n;
    cout<<"Enter the value : ";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"The Array is : ";
    printArray(arr,n);
    bubbleSort(arr,n);
    cout<<endl<<"The Sorted Array is  : ";
    printArray(arr,n);
    return 0;
}