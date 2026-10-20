#include<stdio.h>

int main ()
{
    int n ;
    printf ("Enter number of elements : ");
    scanf ("%d",&n);
    int size ;
    printf ("Enter size of array :");
    scanf ("%d",&size);

    if (n<=size)
    {
        int a[size] ;
        printf ("Input the array elements : ");
        for (int i = 0 ;i<n ;i++)
        {
            scanf ("%d",&a[i]);
        }
        for  (int i =0;i<n;i++)
        {
            for (int j = i+1 ; j< n ;j++)
            {
                if (a[i] < a[j])
                {
                    int temp = a[i] ;
                    a[i] = a[j];
                    a[j] = temp  ;
                }
            }
        }
        for (int i =0 ;i<n;i++)
        {
            printf ("%d ",a[i]);
        }
    }
    else
    {
        printf ("This code is not run !!\nbecause the array size are not equal or grater then element\n");
    }
    return 0 ;



}
