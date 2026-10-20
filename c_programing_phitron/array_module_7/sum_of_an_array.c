#include<stdio.h>
int main ()
{
    int n ;
    scanf ("%d",&n);
    int ar[n] ;
    for (int i = 0;i <n ;i++)
    {
        scanf ("%d",&ar[i]);
    }
    int sum = 0;
    printf ("array = ");
    for (int i =0 ;i<n;i++)
    {
        printf ("%d ",ar[i]);
        sum = sum+ar[i] ;
    }
    printf ("\n");
    printf ("the sum of array = %d",sum);
    return 0 ;
}
