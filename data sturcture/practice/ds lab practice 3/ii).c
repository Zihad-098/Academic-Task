#include<stdio.h>
int main ()
{
    int ar[8] = { 7 , 3 , 4 , 2 , 9 , 21 , 15 , 23 };
    for (int i=0;i<8;i++)
    {
        int temp = ar[i] ;
        int j = i -1;
        while ( j >= 0 && ar[j] > temp )
        {
            ar[j+1] = ar[j] ;
            j-- ;
        }
        ar[j+1]  = temp ;
    }
    printf ("Applying Insertion sorted array : ");
    for (int i=0;i<8;i++)
    {
        printf ("%d ",ar[i]);
    }
    return 0 ;
}
