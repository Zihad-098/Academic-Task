#include<stdio.h>
int main ()
{
    int n , size ;
    printf ("Enter an element : ");
    scanf ("%d",&n);
    printf ("enter the size of array : ");
    scanf ("%d",&size);
    printf ("Please putting the element in array : ");
    int ar[size] ;
    for (int i =0 ;i<n ;i++)
    {
        scanf ("%d",&ar[i]);
    }
    int pos ;
    printf ("enter the position : ");
    scanf ("%d",&pos);
    for (int i = pos ; i<n ;i++)
    {
        ar[i] = ar[i+1];
    }
    printf ("So this is the delete array : ");
    for (int i =0 ;i<n-1;i++)
    {
        printf ("%d ",ar[i]);
    }
    getch () ;
}
