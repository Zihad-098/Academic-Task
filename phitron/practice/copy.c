#include<stdio.h>
int main ()
{
    int m , n ;
    scanf ("%d",&m);
    int a[m];

    for (int i=0;i<m;i++)
    {
        scanf ("%d",&a[i]);
    } 
    scanf ("%d",&n);
    int b[n];
    for (int i=0;i<n;i++)
    {
        scanf ("%d",&b[i]);
    }

    int final[m+n];
    for (int i=0;i<m;i++)
    {
        final[i]=a[i];
    }

    int i=m;
    for (int j=0;j<n;j++)
    {
        final[i]=b[j];
        i++;
    }
    for (int i=0;i<m+n;i++)
    {
        printf("%d ",final[i]);
    }
}