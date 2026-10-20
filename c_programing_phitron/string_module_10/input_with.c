#include<stdio.h>
#include <string.h>
int main ()
{
    char a[10] ;
    //gets (a) ;
    fgets (a,13,stdin);
    printf ("%s ",a);
}