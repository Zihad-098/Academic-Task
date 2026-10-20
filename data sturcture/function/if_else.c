#include<stdio.h>

int minimum (int a , int b )
{
    int temp ;
    if ( a < b )
    {
        temp = a ;
    }
    else 
    {
        temp = b ;
    }
    return temp ;
    
}
int main ()
{
    int a , b ;

    int minimum_value = 0 ; 

    scanf ("%d%d",&a,&b);

    minimum_value = minimum (a,b);

    printf ("The minimum vlaue is : %d",minimum_value);


    return 0 ;
}