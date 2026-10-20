#include<stdio.h>
int main ()
{
    int n , size ;
    printf ("Enter an element : ");
    scanf ("%d",&n);
    printf ("Enter size of array : ");
    scanf ("%d",&size);
    int ar[size] ;
    printf ("please putting the value : ");
    for (int i=0;i<n;i++)
    {
        scanf ("%d",&ar[i]);
    }
    int pos ;
    printf ("Enter the position : ");
    scanf ("%d",&pos);
    for (int i = pos ;i<n;i++)
    {
        ar[i]=ar[i+1];
    }
    printf ("this is deletion array : ");
    for (int i = 0 ;i<n-1;i++)
    {
        printf ("%d ",ar[i]);
    }
    return 0;
}
