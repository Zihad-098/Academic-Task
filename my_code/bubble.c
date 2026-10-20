#include<stdio.h>
int main ()
{
    int n,size ;
    printf ("Enter an element number : ");
    scanf ("%d",&n);
    printf ("Enter array size : ");
    scanf ("%d",&size);
    if (n<=size)
    {
        printf ("code is running !!\n ");
        printf ("Now input the element for array : ");
        int ar[size] ;
        for (int i =0; i<n; i++)
        {
            scanf ("%d",&ar[i]);
        }
       // printf ("Now swaping the element : ");
        for (int i =0 ; i<n ; i++)
        {
            for (int j = i+1; j<n; j++)
            {
                if (ar[i] > ar[j])
                {
                    int temp = ar[i] ;
                    ar[i] = ar[j] ;
                    ar[j] = temp ;
                }
            }
        }
        printf ("Now this is the assending sorting : ");
        for (int i =0 ; i<n; i++)
        {
            printf ("%d ",ar[i]);
        }
    }
    else
    {
        printf ("Code is overflaw !!\n ");
    }


    return 0 ;



}
