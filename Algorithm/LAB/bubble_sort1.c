#include<stdio.h>
int main ()
{
    int n ; 
    scanf ("%d",&n) ;
    int ar[n] ;
    for (int i=0;i<n;i++)
    {
        scanf ("%d",&ar[n]);
    }
    for (int i=0;i<n-1;i++)
    {
        for (int j = 0 ; j <n-i-1;j++)
        {
            if (ar[j] > ar[j+1])
            {
                int a = ar[j] ;
                int b = ar[j+1] ;
                a= a-b ;
                b= a+b ;
                a= b-a ;
            }
        }
    }
    for (int i=0;i<n;i++)
    {
        printf ("%d ",ar[i]);
    }
}