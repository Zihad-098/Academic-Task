#include<stdio.h>

int max2 (int a , int b)
{
    if (a>b)
    return a ;
    return b ;
}
int max3 (int a , int b , int c)
{
    return max2  (max2( a , b) , c );
}
int main ()

{
    int   a , b , c ;
    scanf ("%d%d%d",&a,&b,&c);
    printf ("input the number = %d %d %d\n",a,b,c);
    printf ("Captial nuber is  = %d ",max3(a,b,c));
    return 0 ;
}