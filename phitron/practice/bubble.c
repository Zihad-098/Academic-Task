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
    printf ("\n");
    printf ("before sorting : ");
    for (int i=0;i<n;i++)
    {
        printf ("%d ",ar[i]);
    }
    for (int i=0;i<n;i++)
    {
        for (int j=i+1;j<n;j++)
        {
            if (ar[i] < ar[j])
            {
                int temp = ar[i];
                ar[i] = ar[j];
                ar[j] = temp ;
            }
        }
    }
    printf ("\n");
    printf ("After sorting : ");
    for (int i=0;i<n;i++)
    {
        printf ("%d ",ar[i]);
    }
}