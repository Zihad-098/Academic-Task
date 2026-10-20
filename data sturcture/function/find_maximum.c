#include<stdio.h>

int max2 (int a , int b)
{
    if (a>=b)
    return a ;
    return b ;
}
int main ()
{
    int a , b ;
    //printf ("Enter two numbers : ");
    scanf ("%d%d",&a,&b);
    printf ("Now shows answer = %d",max2(a,b));
    return 0 ;
}