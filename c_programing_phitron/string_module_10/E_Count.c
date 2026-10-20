#include<stdio.h>
#include <string.h>
int main ()
{
    char s[1000001];
    scanf ("%s",s);
    int st = strlen (s) ;
    int sum = 0 ;
    for (int i=0;i<st;i++)
    {
        sum = sum + (s[i] - '0') ;
    }
    printf ("%d",sum) ;
}