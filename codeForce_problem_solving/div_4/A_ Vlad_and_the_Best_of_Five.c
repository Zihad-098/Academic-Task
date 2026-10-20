#include<stdio.h>
int main ()
{
    int t ;
    scanf ("%d",&t);
    while (t--)
    {
        char a[5];

        scanf ("%c",&a);
        if (a['A'] > a['B'])
        {
            printf ("A");
        }
        else
        {
            printf ("B");
        }
    }
}
