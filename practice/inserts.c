#include<stdio.h>
int main ()

{
    int n , size ;
    printf ("Enter number of element : ");
    scanf ("%d",&n);
    printf ("Input your size of array : ");
    scanf ("%d",&size);
    if ( n <= size)
    {
        printf ("Your code is running!!\n");
        int ar[size] ;
        printf ("Input your array element : ");
        for (int i =0 ;i<n ;i++)
        {
            scanf ("%d",&ar[i]);
        }
        int pos , val ;
        printf ("Input your position : ");
        scanf ("%d",&pos);
        printf ("Input your position vale : ");
        scanf ("%d",&val) ;
        for (int i = n ; i >= pos ; i--)
        {
            ar[i] = ar[i-1];
        }
        ar[pos] = val ;
        printf ("Now this is your insertion array = ");
        for (int i =0 ;i <n+1;i++)
        {
            printf ("%d ",ar[i]);
        }
    }
    else
    {
        printf ("please look your condition !!\n");
    }
}
