#include<stdio.h>
int main ()
{
    int t ;
    scanf ("%d",&t);
    while (t--)
    {
        char str [6] ;
        scanf ("%s",str);

        int countA = 0 , countB = 0 ;
        for (int i=0;i<5;i++)
        {
            if (str [i] == 'A')
            {
                countA ++ ;
            }
            else if (str[i] == 'B')
            {
                countB ++ ;
            }
        }
        if (countA > countB)
        {
            printf ("A\n");
        }
        else if (countB > countA)
        {
            printf ("B\n");
        }
        else {
            printf ("Equal\n");
        }
        //printf ("%d %d ",countA,countB);
    }
}