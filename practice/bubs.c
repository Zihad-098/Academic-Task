#include<stdio.h>
int main ()
{
    int n , size ;
    printf ("Enter number of element : ");
    scanf ("%d",&n);
    printf ("Enter size of array : ");
    scanf ("%d",&size);
    if ( n <= size)
    {
        printf ("Your code is running !!\n");
        int ar[size];
        printf ("Now input your array element : ");
        for (int i=0 ;i <n ;i++)
        {
            scanf ("%d",&ar[i]);
        }
        for (int i=0;i<n;i++)
        {
            for (int j=i+1;j<n;j++)
            {
                if (ar[i] > ar[j])
                {
                    int temp = ar[i];
                    ar[i] = ar[j];
                    ar[j] = temp;
                }
            }
        }
        printf ("This is assending sorting code :\n");
        for (int i =0 ;i<n ;i ++)
        {
            printf ("%d ",ar[i]);
        }
    }
    else
    {
        printf ("Your code does not running !!\n");
    }
    return 0 ;
}
