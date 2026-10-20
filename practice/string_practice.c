#include<stdio.h>
#define MAX 100
#define LENGTH 50
int main ()
{
    char name [MAX][LENGTH] ;
    int n ;
    printf ("Enter number of name (up to %d) : ",MAX);
    scanf ("%d",&n);
    for (int i=0;i<n;i++)
    {
        printf ("name : %d ",i+1);
        scanf ("%s",&name[i]);
    }
    int id [n];
    printf ("Press your id : ");
    for (int i=0;i<n;i++)
    {
        printf ("ID : %d ",i+1);
        scanf ("%d",&id);
    }
    for (int i=0;i<n;i++)
    {
        for (int j=i+1;j<n;j++)
        {
            if (id[i] > id [j])
            {
                int temp = id[i] ;
                int  temp1 = name[i] ;
                id [i] = id[j] ;
                name [i] = name[j] ;
                id [j] = temp ;
                name[j] = temp1;
            }
        }
    }
    for (int i=0;i<n;i++)
    {
        printf ("ID : %d name %s ",id[i] , name[i]);
    }

}
