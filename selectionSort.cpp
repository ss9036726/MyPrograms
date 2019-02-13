#include <iostream>

using namespace std;

void selectionSort(int arr[],int n)
{
    int temp,index;
    for(int i=0;i<n-1;i++)
    {
        index=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j] < arr[index])
            {
                index=j;
            }
        }
        temp=arr[index];
        arr[index]=arr[i];
        arr[i]=temp;
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
    cout<<"Enter the size of the Array : ";
    cin>>n;
    cout<<"Enter the value : ";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"The Array is : ";
    printArray(arr,n);
    selectionSort(arr,n);
    cout<<endl<<"The Sorted Array is : ";
    printArray(arr,n);
    return 0;
}