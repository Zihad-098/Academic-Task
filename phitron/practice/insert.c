#include<stdio.h>
int main ()
{
    int n , size ;
    scanf ("%d",&n);
    scanf ("%d",&size);

    int ar[size];
    for (int i=0;i<n;i++)
    {
        scanf ("%d",&ar[i]);
    }
    int pos , val ;
    scanf ("%d",&pos);
    scanf ("%d",&val);
    for (int i=n;i>=pos;i--)
    {
        ar[i] = ar[i-1];
    }
    ar[pos] = val ;

    for (int i=0;i<=n;i++)
    {
        printf ("%d ",ar[i]);
    }
}