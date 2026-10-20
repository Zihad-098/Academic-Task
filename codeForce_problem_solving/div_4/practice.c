#include<stdio.h>
int main ()
{
    int sum2 = 0 ;
    int n ;
    scanf ("%d",&n);
    for (int k=1;k<=n;k*=2)
    {
        for (int j=1;j<=k;j++)
        {
            sum2 ++ ;
        }

    }
    printf ("%d",sum2) ;
}