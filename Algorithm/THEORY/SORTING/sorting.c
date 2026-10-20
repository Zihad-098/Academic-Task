#include<stdio.h>

void bubbleSort (int n , int arr[])
{
    for (int i=0;i<n-1;i++)
    {
        for (int j=0;j<n-i-1;j++)
        {
            if (arr[j] > arr [j+1])
            {
                int temp = arr[j] ;
                arr[j] = arr[j+1] ;
                arr[j+1] = temp ;
            }
        }
    }
}

void selectionSort (int n , int arr[])
{
    for (int i=0;i<n-1;i++)
    {
        int smallidx = i ;
        for (int j=i+1;j<n;j++)
        {
            if (arr[j] < arr[smallidx])
            {
                smallidx = j ;
            }
            int temp = arr[i] ;
            arr[i]  = arr[smallidx] ;
            arr[smallidx] = temp ;
        }
    }
}

void insertionSort (int n , int arr[])
{
    for (int i=1;i<n;i++)
    {
        int current = arr [i] ;
        int previous = i-1;
        while (previous >=0 && arr[previous] > current)
        {
            arr[previous + 1] = arr[previous] ;
            previous -- ;
        }
        arr[previous] = current ;
    }
}

void printArray (int n , int arr[])
{
    for (int i=0;i<n;i++)
    {
        printf ("%d ",arr[i]);
    }
}
int main () 
{
    int n ;
    scanf ("%d",&n);
    int arr[n] ;
    for (int i=0;i<n;i++)
    {
        scanf ("%d",&arr[i]);
    }
   // bubbleSort (n,arr) ;
    selectionSort (n,arr);
    printArray (n,arr) ;

}