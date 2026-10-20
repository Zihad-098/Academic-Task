#include<stdio.h>
int main ()
{
    int n ; 
    scanf ("%d",&n) ;
    int ar[n] ;
    for (int i=0;i<n;i++)
    {
        scanf ("%d",&ar[i]);
    }
    printf ("Original array : ");
    for (int i=0;i<n;i++)
    {
        printf ("%d ",ar[i]);
    }
    printf ("\n");
    int min ; 
    for (int i=0;i<n-1;i++)
    { 
        min = i ;
        for (int j=i+1;j<n;j++)
        {
            if (ar[j] < ar[min] )
            {
                min = j ;
            }
            if (min != i)
            {
                int temp = ar[i] ;
                ar[i] = ar[min] ;
                ar[min] = temp ;
            }
        }
    }
    printf ("Sorted array : ");
    for (int i=0;i<n;i++)
    {
        printf ("%d ",ar[i]);
    }
}