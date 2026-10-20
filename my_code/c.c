#include<stdio.h>

int partition (int arr [] , int lb , int ub)
{
    int pi = arr[lb] ;
    int start = lb ;
    int end = ub ;
    while (lb < ub)
    {
        while (arr[start] <= pi)
        {
            start ++ ;
        }
        while (arr[end] > pi)
        {
            end -- ;
        }
        if (start < end)
        {
            int temp = arr[start] ;
            arr[start] = arr[end] ;
            arr[end] = temp ;
        }
    }
    int temp1 = arr[end] ;
    arr[end] = arr[lb] ;
    arr[lb] = temp1 ;
    return lb ;
}

void QuickSort (int arr[] , int lb , int ub )
{
    while (lb < ub)
    {
        int loc = partition (arr, lb ,ub) ;
        QuickSort (arr,lb,loc-1) ;
        QuickSort (arr,loc+1,ub) ;
    }
}
int main ()
{
    int arr[] = {4, 7 ,11 , 12 ,  13 ,  15 ,  16 ,  18 , 19 } ;
    int n = sizeof (arr) / sizeof(arr[0]);
    QuickSort (arr,0,n-1);
    for (int i=0;i<n;i++)
    {
        printf ("%d ",arr[i]);
    }
    return 0 ;
}
