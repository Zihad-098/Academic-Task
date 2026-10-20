#include<stdio.h>
#include<string.h>
int main ()
{
    char nm[1000];
    scanf ("%s",nm);
    for (int i=0;i<strlen(nm) ; i++)
    {
        scanf ("%s",nm[i]);
    }
    for (int i=0;i<strlen(nm);i++)
    {
        printf ("%s",nm);
    }
}