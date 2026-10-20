#include<stdio.h>

 long long square (int v )
 {
    long long ans ;
    ans = (long long) (v*v) ;
    return ans ;
 }

int main ()
{
    long long t ;
    t = square (40);
    printf ("The square is = %lld ",t);
    return 0 ;
}