#include<stdio.h>
int main ()
{

    int n , size ;
    printf ("Enter an element  : ");
    scanf ("%d",&n);
    printf ("Enter size of array : ");
    scanf ("%d",&size);
    int ar[size] ;
    for (int i =0 ;i<n ;i++)
    {
        scanf ("%d",&ar[i]);
    }
    int pos ;
    scanf ("%d",&pos);
    for (int i = pos +1 ; i<n ; i++)
    {
        ar[i] = ar[i-1];
    }
    for (int i =0 ;i<n;i++)
    {
        printf ("%d ",ar[i]);
    }

}
