#include<stdio.h>

void bubbleSort (int n , int ar[])
{
    for (int i=0;i<n-1;i++)
    {
        for (int j=0;j<n-i-1;j++)
        {
            if (ar[j] > ar[j+1])
            {
                int temp = ar[j] ;
                ar[j] = ar[j+1] ;
                ar[j+1] = temp ;
            }
        }
    }
}

void pribtArray (int n , int ar[])
{
    for (int i=0;i<n;i++)
    {
        printf ("%d ",ar[i]);
    }
    printf ("\n");
}

void selectionSort (int n , int ar[])
{
    for (int i=0;i<n-1;i++)
    {
        int smallidx = i ;
        for (int j=i+1;j<n;j++)
        {
            if (ar[j] < ar[smallidx])
            {
                smallidx = j ;
            }
        }
        int temp = ar[i] ;
        ar[i] = ar[smallidx] ;
        ar[smallidx] = temp ;
    }
}

void insertionSort (int n , int ar[])
{
    for (int i=1;i<n;i++)
    {
       int current = ar[i] ;
       int previous = i - 1 ;
       while (previous >= 0 && ar[previous] > current)
       {
            ar[previous+1] = ar[previous] ;
            previous -- ;
       }
       ar[previous+1] = current ;
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
    insertionSort(n,ar);
    pribtArray (n,ar);
   
    return 0 ;

}