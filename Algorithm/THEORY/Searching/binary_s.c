#include<stdio.h>
#include <stdlib.h>

void binarySearch (int arr[] , int n ,int low , int mid , int high,int data)
{
    low = 0 ;
    high = n-1 ;
     mid = (low+high) / 2 ;
    while (low <= high)
    {
        if (arr[mid] < data )
        {
            low =mid+1;
        }
        else if (arr[mid] == data)
        {
            return mid ;
        }
        else 
        {
            high = mid -1 ;
        }
    }
    return - 1 ;

}
void sortingPart (int arr[] , int n )
{
    for (int i=1;i<n;i++)
    {
        int current = arr[i] ;
        int previos = i-1;
        while (previos >=0 && arr[previos] > current)
        {
            arr[previos+1] = arr[previos] ;
            previos -- ;
        }
        arr[previos+1] = current ;
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
    int data ; 
    scanf ("%d",&data) ;
    sortingPart (arr,n) ;
    for (int i=0;i<n;i++)
    {
        printf ("%d ",arr[i]);
    }
}