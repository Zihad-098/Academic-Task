#include<stdio.h>
int main ()
{
    int k , r ,z ;
    scanf ("%d%d",&k,&r);
    int i =1;
    while (1)
    {
        z = (i*k) % 10 ;
        if (z==0 || z==r)
            break ;
       i++;
    }
    printf ("%d",i);
    return 0 ;
}
