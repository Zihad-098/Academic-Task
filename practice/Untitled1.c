#include<stdio.h>
int main ()
{
    int n ;
    printf ("Input element : ");
    scanf ("%d",&n);
    int a[n];
    printf ("Please input the element : ");
    for (int i =0 ;i<n;i++)
    {
        scanf ("%d",&a[i]) ;
    }
    int pos , val ;
    printf ("Enter position : ") ;
    scanf ("%d",&pos) ;
    printf ("Enter value : ");
    scanf  ("%d",&val) ;
    for (int i = n ;i>=pos ;i--)
    {
        a[i] = a[i-1] ;
    }
    printf ("now this is the insert array : ");
    a[pos] = val ;

    for (int i =0 ;i<n+1;i++)
    {
        printf ("%d ",a[i]);
    }
    return 0 ;
}
