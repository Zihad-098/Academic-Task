#include<stdio.h>
#include<limits.h>
int main ()
{
    int n , size ;
    printf ("Enter an element number : ");
    scanf ("%d",&n);
    printf ("Enter array size : ");
    scanf ("%d",&size);
    if (n<=size )
    {

        int a[size] ;
        printf ("putting the array element : ");
        for (int i = 0;i<n ;i++)
        {
            scanf ("%d",&a[i]);
        }
        int maximum =INT_MIN ;
        int minimum =INT_MAX ;
        int sum1 = 0 ;
        int sum2 = 0 ;
        for (int i = 0;i<n ;i++)
        {
            if (maximum < a[i])
            {
                maximum = a[i];
                sum1+=a[i];
            }
            if (minimum > a[i])
            {
                minimum = a[i] ;
                sum2+=a[i] ;
            }
        }
        printf ("Sum of array maximum number = ");
        printf ("%d\n",sum1);
        printf ("sum of array minimum number = ");
        printf ("%d\n",sum2);

    }
    else
    {
        printf ("The code is overflaw !! ");
    }
    return 0 ;
}
