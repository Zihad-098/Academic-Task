#include<stdio.h>
#include<math.h>
int main ()
{
    long long int num1 , num2 ;

    while ((scanf ("%lld%lld",&num1,&num2) != EOF))
    {
        printf ("%lld\n",num1 > num2 ? num1 - num2 : num2 - num1 );
    }
}
