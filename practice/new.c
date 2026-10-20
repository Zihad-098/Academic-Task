#include<stdio.h>
int main ()
{
    int n , m ;
    printf ("Number of element in first array : ");
    scanf ("%d",&n);

    printf ("Number of element in second array : ");
    scanf ("%d",&m);

    int a[n] , b[m] ;
    printf ("this is the first array input = ");
    for (int i =0 ;i<n;i++)
    {
        scanf ("%d",&a[i]);
    }
    printf ("\n");
    printf ("Now this is the second array input = ");
    for (int i =0 ;i<m;i++)
    {
        scanf ("%d",&b[i]);
    }

    int c[n+m];

    for (int i=0;i<n;i++)
    {
        c[i]=a[i];
    }
    int i = n ;
    for (int j =0 ;j<m;j++)
    {
        c[i]=b[j];
        i++;
    }
    printf ("display on copying array = ");
    for (int i =0 ;i<n+m;i++)
    {
        printf ("%d ",c[i]);
    }


}
