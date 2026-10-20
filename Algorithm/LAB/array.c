#include<stdio.h>

void bubbleSort (int n , int ar[])
{
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n-i-1;j++)
        {
            if (ar[j] > ar[j+1])
            {
                int temp = ar[j] ;
                ar[j] = ar[j+1] ;
                ar[j+1] = temp ;
            }
        }
    }
}

void insertion_Sort (int n , int ar[])
{
    for (int i=1;i<n;i++)
    {
        int temp = ar[i] ;
        int j = i-1 ;
        while (j>=0 && ar[j] > temp )
        {
            ar[j+1] = temp ;
            j--;
        }
        ar[j+1] = temp ;
    }
}
int main ()
{
    int n ;
    scanf ("%d",&n);
    int array [n] ;
    for (int i=0;i<n;i++)
    {
        scanf ("%d",&array[i]);
    }
    // bubbleSort (n,array) ;
    // printf ("bubbleSort = ") ; 
    // for (int i=0;i<n;i++)
    // {
    //     printf ("%d ",array[i]);
    // }
   printf ("\n");
    insertion_Sort (n,array) ;
    printf ("Insertion_Srot = ");
    for (int i=0;i<n;i++)
    {
        printf ("%d ",array[i]);
    }

}