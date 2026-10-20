#include<stdio.h>
int main ()
{
    int n , size ;
    printf ("Enter number of element : ");
    scanf ("%d",&n);
    printf ("enter size of array : ");
    scanf ("%d",&size);
    int ar[size] ;
    for (int i =0 ;i<n;i++)
    {
        scanf ("%d",&ar[i]) ;

    }
    int pos , val ;
    printf ("Enter position : ");
    scanf ("%d",&pos);
    printf ("enter value : ") ;
    scanf ("%d",&val);

    for (int i = n ; i>=pos ; i--)
    {
        ar[i] = ar[i-1];
    }
    ar[pos] = val ;
    for (int i = 0 ;i < n+1  ;i++)
    {
        printf ("%d ",ar[i]);
    }
    return 0 ;
}
