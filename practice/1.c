#include<stdio.h>
int main ()
{
    int n ;
    printf ("Enter the number of student : ");
    scanf ("%d",&n);
    char name [n][100];
    int id [n] ;
    for (int i=0; i<n; i++)
    {
        printf ("Student name : %d = ",i+1);
        scanf ("%s",&name[i]);
        printf ("Student id : %d = ",i+1);
        scanf ("%d",&id[i]);
    }
    for (int i=0; i<n; i++)
    {
        for (int j=i+1; j<n; j++)
        {
            if (id[i] > id [j])
            {
                int temp = id[i];
                id[i] = id[j] ;
                id [j] = temp ;
                char tempName[100];
                strcpy(tempName, name[i]);
                strcpy(name[i], name[j]);
                strcpy(name[j], tempName);
            }
        }
    }

    for (int i=0; i<n; i++)
    {
        printf ("Name : %s , ID : %d\n",name [i],id[i]);
    }
}
