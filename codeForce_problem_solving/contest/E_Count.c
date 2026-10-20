#include<stdio.h>
int main ()
{
    char s[10000001] ;
    scanf ("%s",s);
    int st = strlen (s) ;
    int sum = 0;
    for (int i =0 ;i<st ;i++)
    {
        sum = sum +(s[i]-'0');
    }
    printf ("%d\n",sum);
    return 0 ;
}
