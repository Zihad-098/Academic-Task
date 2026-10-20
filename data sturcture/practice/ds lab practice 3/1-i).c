#include<stdio.h>
int main ()
{
    int ar [8] = { 7 , 3 , 4 , 2 , 9 , 21 , 15 , 23 } ;
    for (int i=0;i<8;i++)
    {
        for (int j=i+1;j<8;j++)
        {
            if (ar[i] > ar[j])
            {
                int temp = ar[i] ;
                ar[i] = ar[j] ;
                ar[j] = temp ;
            }
        }
    }
    printf ("Applying bubble sort : ");
    for (int i=0;i<8;i++)
    {
        printf ("%d ",ar[i]);
    }

    return 0 ;
}
