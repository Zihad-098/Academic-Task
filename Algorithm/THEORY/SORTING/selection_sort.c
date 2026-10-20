#include<stdio.h>

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
            
        }
        int temp = arr[i] ;
        arr [i]  = arr[smallidx] ;
        arr [smallidx] = temp ;
    }
}

void printArray (int n , int arr [])
{
    for (int i=0;i<n;i++)
    {
        printf ("%d ",arr[i]);
    }
}
int main ()
{
    int n = 5 ;
    //scanf ("%d",&n);
    int arr[5] = {14, 56, 32, 3, 89 };
    for (int i=0;i<n;i++)
    {
        //scanf ("%d",&arr[i]);
    }
    selectionSort (n,arr);
    printArray (n,arr);
    return 0 ;
}