#include<stdint.h>
int main ()
{
    long long int X ,Y ;
    scanf ("%lld%lld",&X,&Y);
    long long int summation = X + Y ;
    long long int multiplication = X * Y ;
    long long int subtraction = X - Y ;
    printf ("%lld + %lld = %lld\n",X,Y,summation);
    printf ("%lld * %lld = %lld\n",X,Y,multiplication);
    printf ("%lld - %lld = %lld\n",X,Y,subtraction );
    return 0 ;
}
