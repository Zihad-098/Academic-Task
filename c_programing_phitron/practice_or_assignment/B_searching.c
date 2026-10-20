#include<stdio.h>
int main ()
{
    int n;
    scanf ("%d",&n);
    int A[n];
    int i ;
    for ( i =0 ;i<n ;i++)
    {
        scanf ("%d",&A[i]);
    }
    int X;
    scanf ("%d",&X);
    for (int i =0 ;i<n;i++)
    {
        if (X==A[i]){
            printf ("%d\n",i);
            return 0;

        }
    }
    printf ("-1");


}
