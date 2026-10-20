#include<stdio.h>
#include<string.h>

int main ()
{
    int n ;
    printf ("Enter number of students : ");
    scanf ("%d",&n);
    char name[n][100];
    int id [n] ;
    for (int i=0; i<n; i++)
    {
        printf ("name : %d ",i+1);
        scanf ("%s",&name[i]);
        printf ("Id : %d ",i+1);
        scanf ("%d",&id[i]);
    }
    for (int i=1; i<n; i++)
    {
        int temp = id [i] ;
        char tempName [100] ;
        strcpy (tempName , name[i]);
        int j = i -1 ;
        while ( j>=0 && id[j] > temp )
        {
            id[j+1] = id[j] ;
            strcpy (name[j+1],name[j]);
            j-- ;
        }
        id [j+1] = temp  ;
        strcpy (name[j+1] , tempName);
    }
    for (int i=0;i<n;i++)
    {
        printf ("id = %d and name : %s \n",id[i],name[i]);
    }
    return 0 ;

}
