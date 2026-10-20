#include<stdio.h>
int main ()
{
    int n ;
    scanf ("%d",&n);
    int ar[n] ;
    for (int i=0;i<n;i++)
    {
        scanf ("%d",&ar[i]);
    }
    for (int i=0;i<n-1;i++)
    {
        int min = i ;
        for (int j=i+1;j<n;j++)
        {
            if (ar[min] > ar[j])
            {
                min = j ;
            }
        }
        if (min != i)
        {
            int temp = ar[i] ;
            ar[i] = ar[min] ;
            ar[min] = temp ;
        }
    }
    for (int i=0;i<n;i++)
    {
        printf ("%d ",ar[i]);
    }
    return 0 ;
}