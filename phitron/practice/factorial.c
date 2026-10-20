#include<stdio.h>
int main ()
{
    int num , factorial = 1 ;
    scanf ("%d",&num);
    for (int i=1;i<=num;i++)
    {
        factorial*=i;
    }
    printf ("%d",factorial);

}