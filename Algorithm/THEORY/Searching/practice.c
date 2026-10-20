#include<stdio.h>

int linearSearch (int n , int arr[] , int data )
{
    for (int i=0;i<n;i++)
    {
        if (arr[i] == data)
        {
           return i ;
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
    int data , pos ;
    scanf ("%d",&data);
    int result = linearSearch (n,arr,data);
    printf ("Element = %d\n",data);
    printf ("postion = %d",result+1);
}