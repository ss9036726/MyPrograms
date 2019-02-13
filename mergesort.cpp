#include <iostream>
using namespace std;

void merge(int arr[],int l,int m,int h)
{
    int i,j,k;
    int n1,n2;
    n1 = m-l+1;
    n2 = h-m;
    int a[n1],b[n2];

    for(i=0;i<n1;i++)
    {
        a[i]=arr[l+i];
    }
    for(j=0;j<n2;j++)
    {
        b[j]=arr[m+j+1];
    }

    i=0,j=0,k=l;

    while(i < n1 && j<n2)
    {
        if(a[i]<=b[j])
        {
            arr[k]=a[i];
            i++;
        }
        else 
        {
            arr[k]=b[j];
            j++;
        }
        k++;
    }

    while(i < n1)
    {
        arr[k++]=a[i++];
    }

    while(j<n2)
    {
        arr[k++]=b[j++];
    }
}

void mergeSort(int arr[],int l,int h)
{
    if(l<h)
    {
        int m = (l+(h-l)/2);

        mergeSort(arr,l,m);
        mergeSort(arr,m+1,h);

        merge(arr,l,m,h);
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
    cout<<"Enter the size of an array : ";
    cin>>n;
    cout<<"Enter the value : ";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"The Array is : ";
    printArray(arr,n);
    mergeSort(arr,0,n-1);
    cout<<endl<<"The Sorted Array is : ";
    printArray(arr,n);
    return 0;
}