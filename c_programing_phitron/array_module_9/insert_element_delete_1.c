#include<stdio.h>
int main ()
{
    int n ;
    scanf ("%d",&n);
    int ar[n];
    for (int i =0 ;i<n;i++)
    {
        scanf ("%d",&ar[i]);
    }
    int pos1, pos2 ;
    scanf ("%d%d",&pos1,&pos2);
    for (int i=pos1;int p =pos2 ; int <n-1;i++)
    {
        ar[i]= ar[i+2];
    }
    for (int i =0 ;i<n-1;i++)
    {
        printf ("%d ",ar[i]);
    }
    return 0 ;
}
