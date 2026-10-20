#include<stdio.h>
int main ()

{
    int size , element ;
    printf ("enter size of array : ");
    scanf ("%d",&size) ;
    printf ("Enter number of element : ");
    scanf ("%d",&element) ;
    int ar[size];
    for (int i=0;i<element ;i++)
    {
        scanf ("%d",&ar[i]);

    }
    for (int i=0;i<element ;i++)

    {
        printf ("%d ",ar[i]);
    }
}
