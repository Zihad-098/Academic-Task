#include<stdio.h>
#include<math.h>
int main ()
{
    long long int num1 ,num2 ;

    while ((scanf ("%d%d",&num1,&num2) != EOF))
    {
        if (num1 > num2 )
            printf ("%lld",num1 - num2);
        else
            printf ("%lld",num2 - num1);
    }
    return 0 ;
}
