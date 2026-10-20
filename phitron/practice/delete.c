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
    int pos ;
    scanf ("%d",&pos);
    for (int i=pos;i<n;i++)
    {
        //ar[i-1]=ar[i];
          ar[i] = ar[i+1];
    }
    for (int i=0;i<n-1;i++)
    {
        printf ("%d ",ar[i]);
    }
}