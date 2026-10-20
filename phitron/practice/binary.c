#include<stdio.h>

int binarySearch (int n , int arr[],int data )
{
    int low = 0;
    int high = n ;
    while (low<=high)
    {
        int mid = (low+high) / 2 ;
        if (arr[mid] == data )
        {
            return mid ;
        }
        else if (arr[mid] > data) 
        {
            high = mid - 1 ;
            mid = (low + high) / 2 ;
        }
        else {
            low = mid + 1 ;
        }
    }
    return -1 ;
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
    int result = binarySearch (n,arr,data) ;
    printf ("Element = %d\n",data) ;
    printf ("position = %d\n",result);
}