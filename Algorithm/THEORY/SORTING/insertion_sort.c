#include<stdio.h>

void insertionSort (int n , int ar[])
{
    for (int i=1;i<n;i++)
    {
        int current = ar[i] ;
        int previos = i-1;
        while (previos >=0 && ar[previos] > current)
        {
            ar[previos+1] = ar[previos] ;
            previos -- ;
        }
        ar[previos+1] = current ;
    }
}

void printArray (int n , int ar[])
{
    for (int i=0;i<n;i++)
    {
        printf ("%d ",ar[i]);
    }
}
int main ()
{
    int n ;
    scanf ("%d",&n);
    int ar[n] ;
    for (int i=0;i<n;i++)
    {
        scanf ("%d",&ar[i]);
    }
    insertionSort (n,ar) ;
    printArray (n,ar) ;
}