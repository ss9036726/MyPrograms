#include <iostream>
using namespace std;

//Bubble Sort
void bubbleSort(int arr[],int n)
{
  int temp;
  for(int i=0;i<n-1;i++)
  {
    for(int j=0;j<n-1;j++)
    {
      if(arr[j]>arr[j+1])
      {
        temp=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=temp;
      }
    }
  }
}

//Selection Sort
void selectionSort(int arr[],int n)
{
  int index;
  for(int i=0;i<n-1;i++)
  {
    index = i;
    for(int j=i+1;i<n;i++)
    {
      if(arr[j]<index)
      {
        int temp=arr[j];
        arr[j]=arr[index];
        arr[index]=temp;
      }
    }
  }
}

//Insertion Sort

void insertionSort(int arr[],int n)
{
  for(int i=0;i<n;i++)
  {
    int index = arr[i];
    int j = i-1;
    while(j>=0 && arr[j]>index)
    {
      arr[j]=arr[j+1];
      j=j-1;
    }
    arr[j+1]=index;
  }
}

//Merge Sort

void merge(int arr[],int l,int m,int h)
{
  int i,j,k;
  int n1 = m-l+1;
  int n2 = h-m;

  int a[n1],b[n2];

  for(i=0;i<n1;i++)
  {
    a[i]=arr[l+i];
  }
  for(j=0;j<n2;j++)
  {
    b[j]=arr[m+1+j];
  }

  i=0,j=0,k=l;

  while(i<n1 && j<n2)
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

  while(i<n1)
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
  if(l>h)
  {
    int mid = l+(h-l)/2;

    mergeSort(arr,l,mid);
    mergeSort(arr,mid+1,h);

    merge(arr,l,mid,h);
  }
}

//Quick Sort

int partition(int arr[],int l,int h)
{
  int pivot=arr[h];
  int i=l-1;
  int j;
  for(j=l;j<=h-1;j++)
  {
    if(arr[j]<=pivot)
    {
      i++;
      swap(arr[i],arr[j]);
    }
  }
  swap(arr[i+1],arr[h]);
  return (i+1);
}

void quickSort(int arr[],int l,int h)
{
  if (l<h)
  {
    int pi = partition(arr,l,h);

    quickSort(arr,l,pi-1);
    quickSort(arr,pi+1,h);
  }
}

//Heap Sort

void heapify(int arr[],int i,int n)
{
  int largest = i;
  int left = 2*i+1;
  int right = 2*i+2;

  if(left < n && arr[left] > arr[largest])
  {
    largest = left;
  }

  if(right < n && arr[right] > arr[largest])
  {
    largest = right;
  }

  if(largest!=i)
  {
    swap(arr[i],arr[largest]);
    heapify(arr,largest,n);
  }
}

void heapSort(int arr[],int n)
{
  for(int i=n/2-1;i>=0;i--)
  {
    heapify(arr,i,n);
  }

  for(int i=n-1;i>=0;i--)
  {
    swap(arr[0],arr[i]);
    heapify(arr,0,i);
  }
}

//print Array and Sorting Array

void printArray(int arr[],int n)
{
  for(int i=0;i<n;i++)
  {
    cout<<arr[i]<<" ";
  }
  cout<<endl<<endl<<endl;
}

//main Function 

int main()
{
  int arr[100];
  int i,n;
  cin>>n;
  for(i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  cout<<"The Array is : ";
  printArray(arr,n);
  bubbleSort(arr,n);
  cout<<"Sorting using Bubble Sort : ";
  printArray(arr,n);
  selectionSort(arr,n);
  cout<<"Sorting using Selection Sort : ";
  printArray(arr,n);
  insertionSort(arr,n);
  cout<<"Sorting using Insertion Sort : ";
  printArray(arr,n);
  mergeSort(arr,0,n-1);
  cout<<"Sorting using mergeSort : ";
  printArray(arr,n);
  quickSort(arr,0,n-1);
  cout<<"Sorting using Quick Sort : ";
  printArray(arr,n);
  heapSort(arr,n);
  cout<<"Sorting using Heap Sort : ";
  printArray(arr,n);
  return 0;
}
