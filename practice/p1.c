#include<stdio.h>
int main ()
{
    int n ;
    scanf ("%d",&n);
    int a[n] ;
    int sum = 0;
    for (int i =1 ;i<=n ;i++)
    {
        scanf ("%d",&a[i]);
    }
    sum = a[2] + a[4] ;
    printf ("%d\n",sum);
}
