#include<stdio.h>
int main ()
{
    int n , size ;
    printf ("enter an element : ");
    scanf ("%d",&n);
    printf ("Enter size of array : ");
    scanf ("%d",&size);
    int ar[size];
    printf ("please putting the value : ");
    for (int i =0 ;i<n ;i++)
    {
        scanf ("%d",&ar[i]);
    }
    int pos , val ;
    printf ("Enter position : ");
    scanf ("%d",&pos);
    printf ("Enter value : ");
    scanf ("%d",&val);
    for (int i=n;i>=pos;i--)
    {
        ar[i]=ar[i-1];
    }
    ar[pos] = val ;
    printf ("this is the insertion array = ");
    for (int i =0 ;i<n+1;i++)
    {
        printf ("%d ",ar[i]);
    }
    getch () ;

}