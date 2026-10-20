#include<stdio.h>
#include<math.h>
int main ()
{
    int N ;
    scanf ("%d",&N);
    long long int A[N];
    long long int sum = 0;
    for (int i =0 ; i<N; i++)
    {
        scanf ("%lld",&A[i]);

    }
    for (int i =0 ; i<N; i++)
    {
        sum+=A[i];
    }
    printf ("%lld",abs(sum));
    return 0;
}
