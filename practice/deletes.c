#include<stdio.h>
int main ()
{
    int n , size ;
    printf ("Enter number of element : ");
    scanf ("%d",&n);
    printf ("Enter your size of array : ");
    scanf ("%d",&size);
    if ( n <= size)
    {
        printf ("Your code is running !!\n");
        int ar[size] ;
        printf ("Now input your array element : ");
        for (int i = 0;i<n;i++)
        {
            scanf ("%d",&ar[i]);
        }
        int pos ;
        printf ("Input your position : ");
        scanf ("%d",&pos);
        for (int i = pos ;i <n ;i++)
        {
            ar[i] = ar[i+1] ;
        }
        printf ("This is your deletion array = ");
        for (int i = 0 ;i <n-1;i++ )
        {
            printf ("%d ",ar[i]);
        }


    }
}
