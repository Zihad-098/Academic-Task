#include<stdio.h>
int main ()
{
    int n , size ;

   // printf ("Enter number of element ; ");
    scanf ("%d",&n);

    //printf ("Enter size of array : ");
    scanf ("%d",&size);

    int ar[size] ;
    for (int i=0;i<n;i++)
    {
        scanf ("%d",&ar[i]);
    }

    int data , count = 0 , pos ;

   // printf ("Putting your data : ");
    scanf ("%d",&data);


    for (int i=0;i<n;i++)
    {
        if (ar[i]==data)
        {
            count = 1 ;
            pos = i+1 ;
            break;
        }
    }
    if (count == 0)
    {
        printf ("Element is  Not Found !!");
    }
    else 
    {
        printf ("Element = %d\n",data);
        printf ("Position = %d",pos);
    }
    return 0 ;
}